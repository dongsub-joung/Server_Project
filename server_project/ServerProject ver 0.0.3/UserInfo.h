/*!
*@file	UserInfo.h
*@todo
*		PreUser 구조체 동적 생성
*		-> 관리자 승인 , 동적으로 생성된 PreUser구조체들을 User구조체로 복사, 유저 권한 부여,
*		배열,배열,배열,배열  index는 공통임.
*		포인터 이용 첫째자리 초기화 후, 공통된 index 사용해서 유저를 찾음
*		(id값만 검색해서 or 주민 번호 검색해서 찾을 수 있음)
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