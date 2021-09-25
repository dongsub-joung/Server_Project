/*!
*@file	UserInfo.h
*@todo
*		new PreUser;
*		-> new User= PreUser;
*		Searching Key (ID value or My Number) 
*/

#pragma once

#include "Default_Include.h"

vector <string> g_users;			///< current user list in server
vector <string> g_pre_users;		///< user list remaining admin approve
//vector <string> g_banned_users;	///< correct 5 over, abandoned user list

static struct UserInfo
{
	string m_user_ID;
	string m_user_PW;
	string m_user_ID_number;
	int m_authority_level[3]{ 1,0,0 };

	UserInfo(){}
	UserInfo(string id)
	{
		g_users.push_back(id);
	}
};

static struct PreUser
{
	string m_preuser_ID;
	string m_preuser_PW;
	string m_preuser_ID_number;

	PreUser(){}
	PreUser(string id)
	{
		g_pre_users.push_back(id);
	}
};
  
UserInfo* newUser;
PreUser* preuser_info;
void MoveUserData(PreUser* preuser)
{
	newUser->m_user_ID = preuser->m_preuser_ID;
	newUser->m_user_PW = preuser->m_preuser_PW;
	newUser->m_user_ID_number = preuser->m_preuser_ID_number;
}