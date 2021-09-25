/**
*@file			UserMode_Login.cpp
*@details		Login UI, Using class `UserInfo` for get value data and compare inputed-value
*version		0.0.3
*/

#include "UserMode_Login.h"


void UserLogin::InitLogin()
{
	string inputedID, inputedPW;
	bool login_success{ true };

	UserLogin user_login(UserInfo*);

	cout << "---- CLI: LOGIN ---- \n";
	cout << "ID :\t" << endl;
	cin >> inputedID;

	do
	{
		if (CheckID(inputedID))
		{
			cout << "PW:\t" << endl;
			cin >> inputedPW;

			string approvePW = ReturnPW_Key(inputedID);
			if (inputedPW == approvePW)
			{
				cout << "Completly Done! \n" << endl;
				login_success = false;
			}
			else
			{
				cout << "Incorrectly Access \n";
			}
		}
		else
		{
			cout << "Before the Approving or Not Joiner \n" << endl;
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
