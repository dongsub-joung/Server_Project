#include "UserMode_Login.h"

//user ����ü ���� �޾Ƽ� �ʱ�ȭ �Ұ�.
UserLogin::UserLogin()
{
	
}


void UserLogin::InitLogin()
{
	string inputedID;
	string inputedPW;
	bool login_success{ true };

	cout << "---- �α��� ----" << endl;
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