#pragma once
#include "Default_Include.h"

//PreUser ����ü ���� ���� 
//-> ������ ���� , �������� ������ PreUser����ü���� User����ü�� ����, ���� ���� �ο�,
//�迭,�迭,�迭,�迭  index�� ������.
//������ �̿� ù°�ڸ� �ʱ�ȭ ��, ����� index ����ؼ� ������ ã��
//(id���� �˻��ؼ� or �ֹ� ��ȣ �˻��ؼ� ã�� �� ����)

struct UserInfo
{
public:

private:
	string m_user_ID;
	string m_user_PW;
	string m_user_ID_number;
	int m_authority_level[3]{ 1,0,0 };

	//string* m_user_ID = new string;
	//string* m_user_PW = new string;

	//UserInfo(string id, string pw, string number);

};

struct PreUser
{
	string m_user_ID;
	string m_user_PW;
	string m_user_ID_number;
};
