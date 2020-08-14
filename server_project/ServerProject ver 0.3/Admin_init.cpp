/**
*@brief			Init AdminMode
*@details		
*			UI and Show menu
*				- Change Admin code
*				- Show User Infomation
*				- Sharding
*				- Show PreUser Infomation and Approve PreUser
*				- (Common) File Functions(Read, Write, Delete)
*@author		Joung Dong Sub
*version		0.0.3
*/

#include "Admin_init.h"
#include "FileClass.h"
#include "UserMode.h"

void AdminModeFunction::InitAdminMode()
{

	do
	{
		AdminLogin();
	} while (admin_login);
	
	int selected_admin_opt; //관리자 서비스 분기
	do
	{
		PrintMenu();
		cin >> selected_admin_opt;

		switch (selected_admin_opt)
		{
		case OPT_ChangeAdminCode:
			ChangeAdminCode();
			break;

		case OPT_ShowJoinedUserInfo:
			ShowUserInfo();
			break;

		case OPT_Sharding:
			Sharding();
			break;

		case OPT_WaitingUserInfo:
			WaitingUserInfo();
			break;

		case OPT_FileUpload:
			user_mode.FileUpload();
			break;

		case OPT_FileDelete:
			user_mode.FileDelete();
			break;

		case OPT_FileDownload:
			user_mode.DeleteFile();
			break;

		default:
			cout << "항목에 없는 숫자입니다." << endl;
			continue;
		}
	} while (true);

}

void AdminModeFunction::AdminLogin()
{
	string inputed;
	std::cout << "4자리 Code를 입력해주세요.: " << endl;
	std::cout << "Code: " << endl;
	cin >> inputed;
	CheckCode(inputed);
}

 void AdminModeFunction::CheckCode(string inputed)
{
	Admin_.CheckingCode(inputed);
	this->admin_login = false;
}

 void AdminModeFunction::ChangeAdminCode()
 {
	 Admin_.ChangeCode();
 }

 void AdminModeFunction::ShowUserInfo()
 {
	 Admin_.PrintUserInfo();
 }

 void AdminModeFunction::Sharding()
 {
	 Admin_.AddCapacity();
 }

 void AdminModeFunction::WaitingUserInfo()
 {
	 Admin_.ApproveUser();
 }

void AdminModeFunction::PrintMenu()
{
	cout << "1. 관리자 코드 변경" << endl;
	cout << "2. 가입한 유저 정보 " << endl;
	cout << "3. 하드용량 추가" << endl;
	cout << "4. 대기중인 유저정보" << endl;
	cout << "5. 파일 업로드 " << endl;
	cout << "6. 파일 삭제 " << endl;
	cout << "7. 파일 다운로드" << endl;
}