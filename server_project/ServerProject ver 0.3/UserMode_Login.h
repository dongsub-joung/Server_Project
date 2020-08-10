#pragma once

#include "Default_include.h"
#include "UserInfo.h"

class UserLogin
{
public:
	UserLogin();
	void InitLogin();

private:
	map<string, string> m_account_IDPW;			//ID+PW
	map<string, string> m_account_IDpass;			//ID+pass

	auto SearchID(string search_ID);
	Logining(string id, string pw)

	const int CheckID(string ID);
	const string CheckPW(string ID);
	const void CheckPassed();
};
