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
	string default_code = admin.m_adminCode;

	if (inputed.size()>4)
	{
		if (/* condition */)
		{
			return true;
		}
	}
	else if (inputed == default_code) return false;
	else
	{
		cout << "minimum length is 4 \n";
		return false;
	}
}

void AdminClass::ChangeCode()
{
	string new_code= "";
	do
	{
		cout << "modifing THE CODE \n";
		cin >> new_code;
	} while (CheckingCode(new_code));
	
	string *code = &admin.m_adminCode;
	code = &new_code;
	cout << "completely;" << endl;
}

void AdminClass::PrintUserInfo()
{
	vector<string> &users = g_users;
	cout << "Pring the Joiner's List; \n" << endl;

	if (users.empty() != true)
	{
		for (int i = 0; i <= users.max_size(); i++)
		{
			cout << "Index" << i << users[i] << endl;
		}
	}
	else
	{
		cout << "Nothing Exsit \n" << endl;
	}
}

void AdminClass::AddCapacity()
{
	double *hole_capacity = &(server_capacity.m_storage_capacity);

	std::cout << "PROGRESSING: Upsizing the hole System capacity: \n";
	std::cout << "The hole capacity" << (*hole_capacity) << "\n" << std::endl;
	(*hole_capacity) += 51200;
	std::cout << "The After" << (*hole_capacity) << "\n" <<std::endl;
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
		cout << "Not Exsit The Entering User \n" << endl;
	}

	Admin_ApproveUser approve_user = Admin_ApproveUser();
	approve_user.init_ApproveUser();
}
