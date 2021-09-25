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
vector <string> g_banned_users;		///< correct 5 over, abandoned user list

static struct User
{
	string m_user_ID{" "}
	string m_user_PW{" "}
	string my_number{" "}
	map<String, bool> mark_users;

	User(string id, string PW, string my_number)
	{
		this.m_user_ID= id;
		this.m_user_PW= PW;
		this.my_number= my_number;

		mark_users= new map<string, map>;
		mark_users.set(id, false);
	}
};


static struct UserInfo : User
{
	int m_authority_level[3]{ 1,0,0 };
};

static struct PreUser : User
{
	PreUser(){}
	PreUser(string id)
	{
		do
		{
			
		} while (1);
		
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