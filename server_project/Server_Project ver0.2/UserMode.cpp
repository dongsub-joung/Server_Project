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
	cout << "1. ���� �ٿ�ε�" << endl;
	cout << "2. ���� ���ε� " << endl;
	cout << "3. ���� ���� " << endl;
	cout << "�̿��Ͻ� ���� ��ȣ�� �Է��ϼ���." << endl;

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
		cout << "�׸� ���� �����Դϴ�." << endl;
		break;
	}
}

void UserMode::ShowServerCapacity()
{
	cout << "���� ��ü �뷮: " <<  <<endl;
	cout << "���� ��� �뷮: " <<  <<endl;
	cout << "��� ���� �뷮: " <<  <<endl;
}