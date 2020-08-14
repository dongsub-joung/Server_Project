/**
*@brief			Init UserMode
*@details		UI UserMode
*@author		Joung Dong Sub
*version		0.0.3
*/

#include "UserMode.h"
#include "ServerCapacity.h"

void UserMode::init_UserMode()
{
	ShowServerCapacity();
	FileMenu();
}

void UserMode::ShowServerCapacity()
{
	
	cout << "���� ��ü �뷮: " << info.m_storage_capacity << endl;
	cout << "���� ��� �뷮: " << info.m_used_capacity << endl;
	cout << "��� ���� �뷮: " << info.m_avaible_capacity << endl;
}

void UserMode::FileMenu()
{
	cout << "1. ���� �ٿ�ε�" << endl;
	cout << "2. ���� ���ε� " << endl;
	cout << "3. ���� ���� " << endl;
	cout << "�̿��Ͻ� ���� ��ȣ�� �Է��ϼ���." << endl;

	int selected_service_Num{};
	cin >> selected_service_Num;

	do
	{
		switch (selected_service_Num)
		{
		case 1:
			FileDownload();
			break;
		case 2:
			FileUpload();
			break;
		case 3:
			FileDelete();
			break;
		default:
			cout << "�׸� ���� �����Դϴ�." << endl;
			continue;
		}
	} while (true);
}

void UserMode::FileDownload()
{
	file_class->DownroadFile();
}

void UserMode::FileUpload()
{
	double user_capactiy = info.m_used_capacity;
	file_class->UploadFile(user_capactiy);
}

void UserMode::FileDelete()
{
	file_class->DeleteFile();
}