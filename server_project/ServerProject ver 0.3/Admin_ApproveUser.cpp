#include "Admin_ApproveUser.h"

UserInfo::UserInfo(string id, string pw, string number)
{
	this->m_user_ID;
	this->m_user_PW;
	this->m_user_ID_number;
}

class Admin_ApproveUser
{
public:
	Join join;
	UserInfo userinfo;
	void ApproveUser();

private:

};

void Admin_ApproveUser::ApproveUser()
{
	string pre_user_data = join.AddUserData();
}





void WaitingUserInfo()
{
	array pre_user_list;

	for (int i = 0; i < List.length; i++)
	{
		std::cout << "Index" << i << List[i] << endl;
	}
}