#pragma once

#include "Default_Include.h"
#include "UserInfo.h"

class Join
{
public:
	void InitJoin();

private:
	UserData user_data;

	string m_id;
	string m_password;
	string m_user_id_number;

	bool CheckUserIdNumber(string user_id_number);	//주민 번호 13자리

	bool CheckSpell(string password);				//대소문자&숫자만
	bool CheckLength(string password);				//8자 이상
	bool CheckNumber(string password);				//주민번호 미포함
	bool CheckPassword(string password);			//최종 통과

	void AddUserData(string id, string password);
};
