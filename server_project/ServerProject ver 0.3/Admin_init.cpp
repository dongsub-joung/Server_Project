#include "Admin_init.h"


void AdminModeFunction::InitAdminMode()
{
	string inputed;
	do
	{
		std::cout << "4�ڸ� Code�� �Է����ּ���.: " << endl;
		std::cout << "Code: " << endl;
		cin >> inputed;
		CheckCode(inputed);
	} while (admin_login);
	
	int selected_admin_opt; //������ ���� �б�
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
			cout << "�׸� ���� �����Դϴ�." << endl;
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
	cout << "1. ������ �ڵ� ����" << endl;
	cout << "2. ������ ���� ���� " << endl;
	cout << "3. �ϵ�뷮 �߰�" << endl;
	cout << "4. ������� ��������" << endl;
	cout << "5. ���� ���ε� " << endl;
	cout << "6. ���� ���� " << endl;
	cout << "7. ���� �ٿ�ε�" << endl;
}