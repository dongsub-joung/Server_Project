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
	
	cout << "서버 전체 용량: " << info.m_storage_capacity << endl;
	cout << "현재 사용 용량: " << info.m_used_capacity << endl;
	cout << "사용 가능 용량: " << info.m_avaible_capacity << endl;
}

void UserMode::FileMenu()
{
	cout << "1. 파일 다운로드" << endl;
	cout << "2. 파일 업로드 " << endl;
	cout << "3. 파일 삭제 " << endl;
	cout << "이용하실 서비스 번호를 입력하세요." << endl;

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
			cout << "항목에 없는 숫자입니다." << endl;
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