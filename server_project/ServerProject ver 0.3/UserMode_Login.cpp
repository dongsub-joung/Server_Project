#include "UserMode_Login.h"

//user 구조체 값을 받아서 초기화 할것.
UserLogin::UserLogin()
{
	
}


void UserLogin::InitLogin()
{
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

			string approvePW = CheckPW(inputedID);
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

const int CheckID(string ID)
{
	return user_data.m_account_IDPW.count(ID);
}

const string CheckPW(string ID)
{
	m_account_IDPW.m_account_IDPW.find(id)->second;
	return r;
}


auto UserLogin::SearchID(string search_ID)
{
	return find(m_account_IDPW.begin(), m_account_IDPW.end(), search_ID);
}

void UserLogin::Logining(string id, string pw)
{
	auto *return_key = SearchID(id);
	string ex(return_key);
	//ltr 반복자 문제를 해결해야함
	if ((*return_key) == pw)
	{
		cout << "로그인 성공" << endl;
	}
	else
	{
		cout << "회원이 아닙니다." << endl;
	}
}