#pragma once

#include "Default_Include.h"
#include Userinfo

class UserInfoHandler
{
public:
    User getPreuser();
    UserInfo getApprovedUser();
    void setPreuser(string id, string PW, string my_number);
    vector<string> getPreuserID(vector<UserInfo::User> users);
    vector<string> getPreuserMynumber(vector<UserInfo::User> users);

private:
    User     unapproved_users;
    UserInfo approved_users;
    void moveUserData()User* preuser_info, UserInfo* newUser);
}

void UserInfoHandler::setPreuser(string id, string PW, string my_number)
{
	User pre_user= new User(id, PW, my_number);
}

vector<string> UserInfoHandler::getPreuserID(vector<UserInfo::User> users)
{
    std::vector<string> ids;

    int max_size= users.size();
    for(int i=0; i<max_size; i++) id.push(users[i].m_user_ID);
    return ids;
}


vector<string> UserInfoHandler::getPreuserMynumber(vector<UserInfo::User> users)
{
    std::vector<string> my_numbers;

    int max_size= users.size();
    for(int i=0; i<max_size; i++) my_numbers.push(users[i].my_number);

    return ids;
}

UserInfo UserInfoHandler::getApprovedUser()
{
	return Userinfo;
}

// Deep copy struct value/
void UserInfoHandler::moveUserData(User* preuser_info, UserInfo* newUser)
{
	preuser_info->m_user_ID = newUser->m_user_ID;
	preuser_info->m_user_PW = newUser->m_user_PW;
	preuser_info->m_user_ID_number = newUser->m_user_ID_number;
}
