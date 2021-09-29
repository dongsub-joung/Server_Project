#pragma once

#include "Default_Include.h"
#include Userinfo

class UserInfoHandler
{
public:
    UserInfo::User getPreuser();
    UserInfo::approved_users getApprovedUser();
    void setPreuser(string id, string PW, string my_number);
    void setApproveUser(string level);
    vector<string> getPreuserID(vector<UserInfo::User> users);
    vector<string> getPreuserMynumber(vector<UserInfo::User> users);

private:
    UserInfo::User*           unapproved_users;
    UserInfo::approvedUsers*  approved_users;
    void moveUserData(User* preuser_info, UserInfo* newUser);
}

void UserInfoHandler::setPreuser(string id, string PW, string my_number)
{
    unapproved_users= new User(id, PW, my_number);
}

void UserInfoHandler::setApproveUser(string level)
{
    approved_users= new approvedUsers(level);
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

    return my_numbers;
}

unapproved_users UserInfoHandler::getPreuser()
{
	return unapproved_users;
}

approvedUsers UserInfoHandler::getApprovedUser()
{
	return approved_users;
}

// Deep copy struct value/
void UserInfoHandler::moveUserData()
{
    // approved_users= unapproved_users;
    approved_users.m_user_ID= unapproved_users.m_user_ID;
    approved_users.m_user_PW= unapproved_users.m_user_PW;
    approved_users.m_user_ID_number= unapproved_users.m_user_ID_number;
}
