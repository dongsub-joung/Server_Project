#pragma once

#include "Admin_Class.h"

struct AdminInfo
{
	string m_adminCode;
	bool m_admin_login_state{ false };

	//�⺻ �ڵ� 0000 �ʱ�ȭ
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
	int CheckCode(string inputed);		//0. �ڵ� ����
	void ChangeAdminCode();				//1.������ �ڵ� ����
	void ShowUserInfo();				//2. ���� ���� �����ͼ� ���
	void Sharding();					//3. �ϵ�뷮 �߰�
	void WaitingUserInfo();				//4. ���� ����
};
