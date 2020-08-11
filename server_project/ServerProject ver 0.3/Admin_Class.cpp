

int CheckCode(string inputed)
{
	string codeasdf;//기존 코드

	if (inputed == codeasdf)
	{
		bool* ptr = &admin.m_admin_login_state;
		*ptr = true;

		return 1;
	}
	else
	{
		return 0;
	}
}


void ChangeAdminCode()
{
	char pre; //기존 코드
	string* ptr = &AdminFunction.Admin_info.m_adminCode;
	*ptr = pre;
}

void ShowUserInfo()
{
	//유저 struc에서 배열 가져옴.
	array List;

	for (int i = 0; i < List.length; i++)
	{
		std::cout << "Index" << i << List[i] << endl;
	}
}

void Sharding()
{

	//전체용량을 가져옴
	double* ptr = &server_capacity.m_storage_capacity;

	std::cout << "전체 시스템 용량을 증설합니다." << std::endl;
	std::cout << "현재 전체 용량: " << *ptr << std::endl;
	*ptr += 51200;
	std::cout << "증설 후 전체 용량: " << *ptr << std::endl;
}

void WaitingUserInfo()
{
	array pre_user_list;

	for (int i = 0; i < List.length; i++)
	{
		std::cout << "Index" << i << List[i] << endl;
	}
}