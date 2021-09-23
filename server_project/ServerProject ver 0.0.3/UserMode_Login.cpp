/**
*@file			UserMode_Login.cpp
*@details		Login UI, Using class `UserInfo` for get value data and compare inputed-value
*version		0.0.3
*/

#include "UserMode_Login.h"


void UserLogin::InitLogin()
{
	UserLogin user_login(UserInfo*);

	string inputedID;
	string inputedPW;
	bool login_success{ true };

	cout << "---- 로그인 ----" << endl;
	cout << "id :" << endl;
	cin >> inputedID;
	

	do
	{
		if (CheckID(inputedID))
		{
			cout << "PW:" << endl;
			cin >> inputedPW;

			string approvePW = ReturnPW_Key(inputedID);
			if (inputedPW == approvePW)
			{
				cout << "로그인 완료" << endl;
				login_success = false;
			}
		}
		else
		{
			cout << "회원이 아니거나 관리자의 승인 전입니다." << endl;
		}
	} while (login_success);
}

UserLogin::UserLogin(UserInfo* newUser)
{
	user_login->m_account_IDPW.insert(make_pair(newUser->m_user_ID, newUser->m_user_PW));
}

const bool UserLogin::CheckID(string ID)
{
	m_account_IDPW.count(ID);
	return true;
}

const string UserLogin::ReturnPW_Key(string ID)
{
	return m_account_IDPW.find(ID)->second;
}
