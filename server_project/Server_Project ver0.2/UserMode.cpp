#include "Default_Include.h"
#include "Login.cpp"
#include "File.cpp"
#include "ServerCapacity.cpp"
class UserMode
{
public:
	Login login;
	
	void init_UserMode();
	void ShowServerCapacity();

	void FileMenu();
	void FileDownload();
	void FileUpload();
	void FileDelete();
private:

};

void UserMode::init_UserMode()
{
	ShowServerCapacity();
	FileMenu();

}

void UserMode::FileMenu()
{
	cout << "1. 파일 다운로드" << endl;
	cout << "2. 파일 업로드 " << endl;
	cout << "3. 파일 삭제 " << endl;
	cout << "이용하실 서비스 번호를 입력하세요." << endl;

	int selected_service_Num;
	cin >> selected_service_Num;

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
		break;
	}
}

void UserMode::ShowServerCapacity()
{
	cout << "서버 전체 용량: " <<  <<endl;
	cout << "현재 사용 용량: " <<  <<endl;
	cout << "사용 가능 용량: " <<  <<endl;
}