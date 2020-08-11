#pragma once


#include "Default_Include.h"
#include "UserInfo.h"

class Join
{
public:
	Join() {};

	void InitJoin();

	string m_id;
	string m_password;
	string m_user_id_number;

	PreUser preUser;
	void SavePreUser(PreUser* preUser);	//관리자 모드용 유저 정보 반환 

private:
	bool m_password_control{ true };

	bool CheckUserIdNumber(string user_id_number);	//주민 번호 13자리

	bool CheckSpell(string password);				//대소문자&숫자만
	bool CheckLength(string password);				//8자 이상
	bool CheckNumber(string password);				//주민번호 미포함
	void CheckPassword(bool, bool, bool);			//최종 통과


};