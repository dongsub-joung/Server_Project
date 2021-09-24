#include "Default_Include.h"
#include "UserInfo, Data.h"

class Login
{
public:
	Login();
	~Login();

	bool login_success{ false };

	void init_Login();

private:
	string id, pw;
	UserInfo user_info;
	UserData user_data;

	const int CheckID(string ID);
	const string CheckPW(string ID);
	const void CheckPassed();
};

Login::Login()
{
}
Login::~Login()
{
}

void Login::init_Login()
{
	cout << "Login" << endl;
	cout << "ID:" << endl;
	cin >> id;
	if (CheckID(id))
	{
		cout << "PW:" << endl;
		cin >> pw;

		string checked = CheckPW(id);
		if (pw == checked)
		{
			cout << "로그인 완료" << endl;
			CheckPassed();
		}
	}
	else
	{
		cout << "해당 사항이 없습니다." << endl;
	}
}

const void Login::CheckPassed()
{
	bool* ptr = &login_success;
	*ptr = true;
}

const int Login::CheckID(string ID)
{
	return user_data.m_account_IDPW.count(ID);
}

const string Login::CheckPW(string ID)
{
	string r = user_data.m_account_IDPW.find(id)->second;
	return r;
}

