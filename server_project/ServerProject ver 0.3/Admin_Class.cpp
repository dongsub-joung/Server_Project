/*!
*@brief			AdminMode Functions
*@details
*				1. Change Admin code
*				2. Show User Infomation
*				3. Sharding
*				4. Show PreUser Infomation and Approve PreUser
*				(Common) File Functions(Read, Write, Delete)
*@author		Joung Dong Sub
*@version		0.0.3
*/

#include "Admin_Class.h"
#include "Admin_ApproveUser.h"

UserInfo newUser;
PreUser preUser;
CapacityInfo server_capacity;

bool AdminClass::CheckingCode(string inputed)
{
	//�����ϸ� ���� ��) 4�ڸ� �Ѿ��� ��� �����÷ο츦 �����ϴ� ���
	string default_code = admin.m_adminCode;

	if (inputed == default_code)
	{
		return false;
	}
	else if (inputed.size()>4)
	{
		cout << "�ڵ�� 4�ڸ��Դϴ�." << endl;
		return true;
	}
	else
	{
		return true;
	}
}

void AdminClass::ChangeCode()
{
	string new_code;

	cout << "�����Ͻ� �ڵ带 �Է��Ͻÿ�." << endl;
	cin >> new_code;
	cout << "�ڵ带 �����մϴ�." << endl;
	string *code = &admin.m_adminCode;
	code = &new_code;

	cout << "���� �Ϸ�" << endl;
}

void AdminClass::PrintUserInfo()
{
	vector<string> &users = g_users;
	cout << "������ ����� ����մϴ�." << endl;

	if (users.empty() != true)
	{
		for (int i = 0; i <= users.max_size(); i++)
		{
			cout << "Index" << i << users[i] << endl;
		}
	}
	else
	{
		cout << "�����ڰ� �����ϴ�." << endl;
	}
}

void AdminClass::AddCapacity()
{
	double *hole_capacity = &(server_capacity.m_storage_capacity);

	std::cout << "��ü �ý��� �뷮�� �����մϴ�." << std::endl;
	std::cout << "���� ��ü �뷮: " << (*hole_capacity) << std::endl;
	(*hole_capacity) += 51200;
	std::cout << "���� �� ��ü �뷮: " << (*hole_capacity) << std::endl;
}

void AdminClass::ApproveUser()
{
	vector<string>& pre_user_list = g_pre_users;

	if (pre_user_list.empty() != true)
	{
		for (int i = 0; i <= pre_user_list.max_size(); i++)
		{
			cout << "Index" << i << pre_user_list[i] << endl;
		}
	}
	else
	{
		cout << "���Կ�û�ڰ� �����ϴ�." << endl;
	}

	Admin_ApproveUser approve_user = Admin_ApproveUser();
	approve_user.init_ApproveUser();
}