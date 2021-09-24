#pragma once

#include "Default_Include.h"
#include "UserInfo.h"
#include "SHA256_Join.h"

class Join
{
public:
	Join() {};

	void InitJoin();

	string m_id;
	string m_password;
	string m_user_id_number;

	PreUser preUser;
	SHA256_Join sha256_join;

	void SavePreUser();

private:
	bool m_password_control{ true };

	bool CheckUserIdNumber(string user_id_number);	// User ID Number) Char[13]
	bool CheckSpell(string password);				// Password) a-z,A-Z,0-9
	bool CheckLength(string password);				// Password) char[n], n>8
	bool CheckNumber(string password);				// Password) Block the `User ID Number`
	void CheckPassword(bool, bool, bool);			// Final auth
	void authConditions(int conditons);				// MSG code each cases
};