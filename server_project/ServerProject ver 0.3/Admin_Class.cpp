

int CheckCode(string inputed)
{
	string codeasdf;//���� �ڵ�

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
	char pre; //���� �ڵ�
	string* ptr = &AdminFunction.Admin_info.m_adminCode;
	*ptr = pre;
}

void ShowUserInfo()
{
	//���� struc���� �迭 ������.
	array List;

	for (int i = 0; i < List.length; i++)
	{
		std::cout << "Index" << i << List[i] << endl;
	}
}

void Sharding()
{

	//��ü�뷮�� ������
	double* ptr = &server_capacity.m_storage_capacity;

	std::cout << "��ü �ý��� �뷮�� �����մϴ�." << std::endl;
	std::cout << "���� ��ü �뷮: " << *ptr << std::endl;
	*ptr += 51200;
	std::cout << "���� �� ��ü �뷮: " << *ptr << std::endl;
}

void WaitingUserInfo()
{
	array pre_user_list;

	for (int i = 0; i < List.length; i++)
	{
		std::cout << "Index" << i << List[i] << endl;
	}
}