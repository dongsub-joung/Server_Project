#include "Admin_init.h"


void AdminModeFunction::InitAdminMode()
{
	string inputed;
	do
	{
		std::cout << "4자리 Code를 입력해주세요.: " << endl;
		std::cout << "Code: " << endl;
		cin >> inputed;
		CheckCode(inputed);
	} while (admin_login);
	
	int selected_admin_opt; //관리자 서비스 분기
	do
	{
		PrintMenu();
		cin >> selected_admin_opt;

		switch (selected_admin_opt)
		{
		case OPT_ChangeAdminCode:
			AdminFunction.ChangeAdminCode();
			break;

		case OPT_ShowJoinedUserInfo:
			AdminFunction.ShowUserInfo();
			break;

		case OPT_Sharding:
			AdminFunction.Sharding();
			break;

		case OPT_WaitingUserInfo:
			AdminFunction.WaitingUserInfo();
			break;

		case OPT_FileUpload:


		case OPT_FileDelete:

			break;

		case OPT_FileDownload:

			break;

		default:
			cout << "항목에 없는 숫자입니다." << endl;
			continue;
		}
	} while (true);

}


 void AdminModeFunction::CheckCode(string inputed)
{


	this->admin_login = false;
}

 void AdminModeFunction::ChangeAdminCode()
 {

 }

 void AdminModeFunction::ShowUserInfo()
 {

 }

 void AdminModeFunction::Sharding()
 {

 }

 void AdminModeFunction::WaitingUserInfo()
 {

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