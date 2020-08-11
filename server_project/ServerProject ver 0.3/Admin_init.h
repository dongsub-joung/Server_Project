#pragma once

#include "Admin_Class.h"

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
	//기본 코드 0000 초기화
	AdminInfo() {}
	AdminInfo(const AdminInfo& admin_info){}
	AdminInfo& operater(const AdminInfo& admin_info){}
};

class AdminModeFunction
{
public:
	void InitAdminMode();

private:
	bool admin_login{ true };
	AdminInfo admin = AdminInfo::getInstance();

	enum selecteOPT
	{
		OPT_ChangeAdminCode = 1,
		OPT_ShowJoinedUserInfo = 2,
		OPT_Sharding = 3,
		OPT_WaitingUserInfo = 4,
		OPT_FileUpload = 5,
		OPT_FileDelete = 6,
		OPT_FileDownload = 7
	};

// ------ function ----------
	void CheckCode(string inputed);			//0. 코드 인증
	void ChangeAdminCode();					//1.관리자 코드 변경
	void ShowUserInfo();					//2. 유저 정보 가져와서 출력
	void Sharding();						//3. 하드용량 추가
	void WaitingUserInfo();					//4. 유저 승인

//------ etc function ----------
	void PrintMenu();
};
