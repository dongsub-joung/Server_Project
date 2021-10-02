#pragma once

#include "Userinfo.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class UserInfoHandler
{
public:
    UserInfoHandler(){};
    UserInfo::User getPreuser();
    UserInfo::approved_users getApprovedUser();
    void setPreuser(string id, string PW, string my_number);
    void setApproveUser(string level);
    vector<string> getPreuserID(vector<UserInfo::User> users);
    vector<string> getPreuserMynumber(vector<UserInfo::User> users);
    map<string, bool> getMarkusers();
    
private:
    UserInfo::User           unapproved_users;
    UserInfo::approvedUsers  approved_users;
    map<string, bool> g_mark_users;

    void setMarkusers();
    void moveUserData(User unapproved_users, string id, string lvl);
}

void UserInfoHandler::setMarkusers()
{
    // Need Pre locate value at Join.cpp 
    g_mark_users= unapproved_users.mark_users;
}

void UserInfoHandler::setPreuser(string id, string PW, string my_number)
{
    unapproved_users= new User(id, PW, my_number);
}

vector<string> UserInfoHandler::getPreuserID(vector<UserInfo::User> users)
{
    vector<string> ids;

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

void UserInfoHandler::moveUserData(User unapproved_users, string id, string lvl)
{
    bool id_checker{false};

    id_checker= unapproved_users.count(id) : true ? false;
    if(id_checker)
    {	
    	unapproved_users.mark_users[id]= true;
    	approved_users= UserInfo::approveUsers approvedUsers(lvl);
    }
    else { cout<< "UnJoined ID\n" << endl; return; }
  
    // approved_users= unapproved_users;
    approved_users.m_user_ID= unapproved_users.m_user_ID;
    approved_users.m_user_PW= unapproved_users.m_user_PW;
    approved_users.m_user_ID_number= unapproved_users.m_user_ID_number;
}
