#include "UserMode_Login.h"

void UserLogin::InitLogin()
{
	UserLogin user_login(UserInfo*);

	string inputedID;
	string inputedPW;
	bool login_success{ true };

	cout << "---- �α��� ----" << endl;
	cout << "id :" << endl;
	cin >> inputedID;
	SearchID(inputedID);

	do
	{
		if (CheckID(inputedID))
		{
			cout << "PW:" << endl;
			cin >> inputedPW;

			string approvePW = ReturnPW_Key(inputedID);
			if (inputedPW == approvePW)
			{
				cout << "�α��� �Ϸ�" << endl;
				login_success = false;
			}
		}
		else
		{
			cout << "ȸ���� �ƴϰų� �������� ���� ���Դϴ�." << endl;
		}
	} while (login_success);
}

//user ����ü ���� �޾Ƽ� �ʱ�ȭ �Ұ�.
UserLogin::UserLogin(UserInfo* newUser)
{
	user_login->m_account_IDPW.insert(make_pair(newUser->m_user_ID, newUser->m_user_PW));
	user_login->m_account_IDpass.insert(make_pair(newUser->m_user_ID, newUser->m_user_ID_number));
}


const bool UserLogin::CheckID(string ID)
{
	UserLogin::m_account_IDPW.count(ID);
	return true;
}


const string UserLogin::ReturnPW_Key(string ID)
{
	return UserLogin::m_account_IDPW.find(ID)->second;
}


const auto UserLogin::SearchID(string search_ID)
{
	return find(m_account_IDPW.begin(), m_account_IDPW.end(), search_ID);
}

void UserLogin::Logining(string id, string pw)
{
	auto *return_key = SearchID(id);
	string ex(return_key);
	//ltr �ݺ��� ������ �ذ��ؾ���
	if ((*return_key) == pw)
	{
		cout << "�α��� ����" << endl;
	}
	else
	{
		cout << "ȸ���� �ƴմϴ�." << endl;
	}
}