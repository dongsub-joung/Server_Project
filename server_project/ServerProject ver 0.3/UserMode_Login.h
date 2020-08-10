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

	const bool CheckID(string ID);					//ID를 이용해서 주민등록번호 조회
	const auto SearchID(string search_ID);			//ID이용 PW검색
	void Logining(string id, string pw);		//PW키를 이용, 인증

	const int CheckID(string ID);
	const string ReturnPW_Key(string ID);

	const void CheckPassed();
};
