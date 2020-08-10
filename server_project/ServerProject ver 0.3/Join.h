#pragma once

#include "Default_Include.h"
#include "UserInfo.h"

class Join
{
public:
	string m_id;
	string m_password;
	string m_user_id_number;
	string AddUserData();	//������ ���� ���� ���� ��ȯ 
	
	void InitJoin();

private:
	bool CheckUserIdNumber(string user_id_number);	//�ֹ� ��ȣ 13�ڸ�

	bool CheckPassword(string password);			//���� ���
		bool CheckSpell(string password);				//��ҹ���&���ڸ�
		bool CheckLength(string password);				//8�� �̻�
		bool CheckNumber(string password);				//�ֹι�ȣ ������
};
