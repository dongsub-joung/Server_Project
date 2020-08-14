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
	map<string, string> m_account_IDPW;			///Key:ID, Value:PW

	const bool CheckID(string ID);				///Search User ID Number (Key: ID) return 0 or 1
	const auto SearchID(string search_ID);		///Search Password value (Key: ID) return string value

	const string ReturnPW_Key(string ID);
};
