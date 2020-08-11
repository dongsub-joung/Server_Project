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


	bool CheckingCode(string inputed);		//������ �α���
	void ChangeCode();		//�ڵ� ����
	void PrintUserInfo();		//���� ���� ���
	void AddCapacity();						//3. �ϵ�뷮 �߰�
	void ApproveUser();					//4. ���� ����
};