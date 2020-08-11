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
	//�⺻ �ڵ� 0000 �ʱ�ȭ
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
	void CheckCode(string inputed);			//0. �ڵ� ����
	void ChangeAdminCode();					//1.������ �ڵ� ����
	void ShowUserInfo();					//2. ���� ���� �����ͼ� ���
	void Sharding();						//3. �ϵ�뷮 �߰�
	void WaitingUserInfo();					//4. ���� ����

//------ etc function ----------
	void PrintMenu();
};
