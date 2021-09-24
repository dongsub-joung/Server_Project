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
	//구현하면 좋은 것) 4자리 넘었을 경우 오버플로우를 제안하는 기능
	string default_code = admin.m_adminCode;

	if (inputed == default_code)
	{
		return false;
	}
	else if (inputed.size()>4)
	{
		cout << "코드는 4자리입니다." << endl;
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

	cout << "변경하실 코드를 입력하시오." << endl;
	cin >> new_code;
	cout << "코드를 변경합니다." << endl;
	string *code = &admin.m_adminCode;
	code = &new_code;

	cout << "변경 완료" << endl;
}

void AdminClass::PrintUserInfo()
{
	vector<string> &users = g_users;
	cout << "가입자 목록을 출력합니다." << endl;

	if (users.empty() != true)
	{
		for (int i = 0; i <= users.max_size(); i++)
		{
			cout << "Index" << i << users[i] << endl;
		}
	}
	else
	{
		cout << "가입자가 없습니다." << endl;
	}
}

void AdminClass::AddCapacity()
{
	double *hole_capacity = &(server_capacity.m_storage_capacity);

	std::cout << "전체 시스템 용량을 증설합니다." << std::endl;
	std::cout << "현재 전체 용량: " << (*hole_capacity) << std::endl;
	(*hole_capacity) += 51200;
	std::cout << "증설 후 전체 용량: " << (*hole_capacity) << std::endl;
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
		cout << "가입요청자가 없습니다." << endl;
	}

	Admin_ApproveUser approve_user = Admin_ApproveUser();
	approve_user.init_ApproveUser();
}