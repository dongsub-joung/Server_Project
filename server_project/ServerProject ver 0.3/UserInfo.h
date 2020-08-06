#pragma once
#include "Default_Include.h"

struct UserInfo
{
	string m_user_ID;
	string m_user_PW;
	string m_user_number;
	int m_authority_level[3]{ 1,0,0 };

	UserInfo() {};
	UserInfo(string id, string pw, string number)
	{
		this->m_user_ID;
		this->m_user_PW;
		this->m_user_number;
	}
};

struct PreUserInfo
{
	string m_user_ID;
	string m_user_PW;
};

struct UserData
{
	map<string, string> m_account_IDPW;			//ID+PW
	map<string, string> m_account_IDpass;			//ID+pass
};
