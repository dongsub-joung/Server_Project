#pragma once

#include "Default_include.h"
#include "UserInfo.h"

class UserLogin
{
public:
	UserLogin(UserInfo* newUser);
	void InitLogin();

private:
	UserLogin *user_login;
	map<string, string> m_account_IDPW;			//ID+PW
	map<string, string> m_account_IDpass;		//ID+pass

	const bool CheckID(string ID);				//ID�� �̿��ؼ� �ֹε�Ϲ�ȣ ��ȸ
	const auto SearchID(string search_ID);		//ID�̿� PW�˻�

	const string ReturnPW_Key(string ID);
};
