#pragma once

#include "ServerCapacity.h"
#include "UserInfo.h"

#include "Admin_ApproveUser.h"

struct AdminInfo
{
public:
	string m_adminCode{ "0000" };

	static AdminInfo& getInstance()
	{
		static AdminInfo instance;
		return instance;
	}

private:
	AdminInfo() {}
	AdminInfo(const AdminInfo& admin_info) {}
	AdminInfo& operater(const AdminInfo& admin_info) {}
};

class AdminClass
{
public:
	AdminInfo& admin = AdminInfo::getInstance();


	bool CheckingCode(string inputed);		//관리자 로그인
	void ChangeCode();		//코드 변경
	void PrintUserInfo();		//유저 정보 출력
	void AddCapacity();						//3. 하드용량 추가
	void ApproveUser();					//4. 유저 승인
};