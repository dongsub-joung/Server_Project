#pragma once

#include "Default_Include.h"
#include "UserInfo.h"

class Join
{
public:
	void InitJoin();

private:
	UserData user_data;

	string m_id;
	string m_password;
	string m_user_id_number;

	bool CheckUserIdNumber(string user_id_number);	//�ֹ� ��ȣ 13�ڸ�

	bool CheckSpell(string password);				//��ҹ���&���ڸ�
	bool CheckLength(string password);				//8�� �̻�
	bool CheckNumber(string password);				//�ֹι�ȣ ������
	bool CheckPassword(string password);			//���� ���

	void AddUserData(string id, string password);
};
