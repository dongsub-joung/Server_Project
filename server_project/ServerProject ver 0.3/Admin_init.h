#pragma once

#include "Admin_Class.h"

struct AdminInfo
{
	string m_adminCode;
	bool m_admin_login_state{ false };

	//기본 코드 0000 초기화
	AdminInfo()
	{
		m_adminCode = "0000";
	};
};

class AdminModeFunction
{
public:
	void InitAdminMode();

private:
	int CheckCode(string inputed);		//0. 코드 인증
	void ChangeAdminCode();				//1.관리자 코드 변경
	void ShowUserInfo();				//2. 유저 정보 가져와서 출력
	void Sharding();					//3. 하드용량 추가
	void WaitingUserInfo();				//4. 유저 승인
};
