/**
*@file			UserMode_Login.h
*/

#pragma once

#include "Default_include.h"
#include "UserInfo.h"

class UserLogin
{
public:
	UserLogin(UserInfo* newUser);				///< Insert (ID,Password) in map<userID, User PW>
	void InitLogin();

private:
	UserLogin *user_login;
	map<string, string> m_account_IDPW;			///< Key:ID, Value:PW

	const bool CheckID(string ID);				///< Check User ID Number (Key: ID)
	const string ReturnPW_Key(string ID);		///< Search Password value(Key: ID)
};
