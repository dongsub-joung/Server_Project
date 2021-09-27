/*!
*@file	UserInfo.h
*@todo
*		new PreUser;
*		-> new User= PreUser;
*		Searching Key (ID value or My Number) 
*/

#pragma once
#include "Default_Include.h"
#include <exception>

class UserInfo
{
public:
	UserInfo(){}
	User getUser();
	void moveUserData()User* preuser_info, UserInfo* newUser);
private:
	struct User;
	struct UserInfo : User;
	void setPreuser(string id, string PW, string my_number);
	void moveUserData()User* preuser_info, UserInfo* newUser);
}


struct User
{
	string& m_user_ID{""}
	string& m_user_PW{""}
	string& my_number{""}
	map<string, bool> mark_users;

	User(string id, string PW, string my_number)
	{
		m_user_ID {id};
		m_user_PW {PW};
		my_number {my_number};

		mark_users= new map<string, map>;
		mark_users.set(id, false);
	}
};

struct UserInfo : User
{
	enum ACCESS{
		READ= 0,
		WRITE= 1,
		MODIFY= 2
	};

	const int ABLE= 1, DISABLE= 0;
	int m_authority_level[3]{ 0,0,0 };

	// Sample levle value "111" or "101"
	UserInfo(string level)
	{
		try
		{
			for (int i = READ; i <= MODIFY; i++)
			{
				c= (char) level[i];
				if (c != 33 || c != 34) throw();
			}
		}
		catch(const std::exception& e) std::cerr << e.what() << '\n';

		for (int i = 0; i < level.length(); i++)
		{
			if(level[i] == "1") m_authority_level[i]= ABLE;
		}
	}
};

void UserInfo::setPreuser(string id, string PW, string my_number)
{
	User pre_user= new User(id, PW, my_number); 
}

UserInfo UserInfo::getUser()
{
	return Userinfo;
}

// @TODO
// Deep copy struct value/
void moveUserData(User* preuser_info, UserInfo* newUser)
{
	preuser_info->m_user_ID = newUser->m_user_ID;
	preuser_info->m_user_PW = newUser->m_user_PW;
	preuser_info->m_user_ID_number = newUser->m_user_ID_number;
}
