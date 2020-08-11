#pragma once


#include "Default_Include.h"
#include "UserInfo.h"

class Join
{
public:
	Join() {};

	void InitJoin();

	string m_id;
	string m_password;
	string m_user_id_number;

	PreUser preUser;
	void SavePreUser(PreUser* preUser);	//������ ���� ���� ���� ��ȯ 

private:
	bool m_password_control{ true };

	bool CheckUserIdNumber(string user_id_number);	//�ֹ� ��ȣ 13�ڸ�

	bool CheckSpell(string password);				//��ҹ���&���ڸ�
	bool CheckLength(string password);				//8�� �̻�
	bool CheckNumber(string password);				//�ֹι�ȣ ������
	void CheckPassword(bool, bool, bool);			//���� ���


};