#pragma once
#include "Default_Include.h"

//PreUser ����ü ���� ���� 
//-> ������ ���� , �������� ������ PreUser����ü���� User����ü�� ����, ���� ���� �ο�,
//�迭,�迭,�迭,�迭  index�� ������.
//������ �̿� ù°�ڸ� �ʱ�ȭ ��, ����� index ����ؼ� ������ ã��
//(id���� �˻��ؼ� or �ֹ� ��ȣ �˻��ؼ� ã�� �� ����)

static struct UserInfo
{
	string m_user_ID;
	string m_user_PW;
	string m_user_ID_number;
	int m_authority_level[3]{ 1,0,0 };
};

static struct PreUser
{
	string m_preuser_ID;
	string m_preuser_PW;
	string m_preuser_ID_number;
};

UserInfo* newUser;
PreUser* preuser_info;

void MoveUserData(PreUser* preuser)
{
	newUser->m_user_ID = preuser->m_preuser_ID;
	newUser->m_user_PW = preuser->m_preuser_PW;
	newUser->m_user_ID_number = preuser->m_preuser_ID_number;
}