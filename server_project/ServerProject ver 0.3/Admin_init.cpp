#include "Admin_init.h"

void AdminModeFunction::InitAdminMode()
{
	CheckCode(string inputed);
	std::cout << "4�ڸ� Code�� �Է����ּ���.: " << endl;
	std::cout << "Code: " << endl;
	char inputed[4];
	cin >> inputed;
	//�����ϸ� ���� ��) 4�ڸ� �Ѿ��� ��� �����÷ο츦 �����ϴ� ���

	//�ڵ尡 true��
	if (AdminFunction.CheckCode(inputed[4]))
	{
		cout << "1. ������ �ڵ� ����" << endl;
		cout << "2. ������ ���� ���� " << endl;
		cout << "3. �ϵ�뷮 �߰�" << endl;
		cout << "4. ������� ��������" << endl;
		cout << "5. ���� ���ε� " << endl;
		cout << "6. ���� ���� " << endl;
		cout << "7. ���� �ٿ�ε�" << endl;

		int selected_admin_opt; //������ ���� �б�
		cin >> selected_admin_opt;

		switch (selected_admin_opt)
		{
		case 1:
			AdminFunction.ChangeAdminCode();
			break;

		case 2:
			AdminFunction.ShowUserInfo();
			break;

		case 3:
			AdminFunction.Sharding();
			break;

		case 4:
			AdminFunction.WaitingUserInfo();
			break;

		case 5:
			string input_title_up;
			double input_volume;
			std::cout << "���ε��� ���� �̸��� �Է��ϼ���." << endl;
			std::cin >> input_title_up;
			std::cout << "���ε��� ������ �뷮�� MB�� �Է��ϼ���." << endl;
			std::cin >> input_volume;

			double presnt; //���� ���� �뷮 - ���� �뷮
			if ((presnt - input_volume) > 0)
			{
				file_control.UploadFile(input_title_up, input_volume);
			}
			break;

		case 6:
			string input_title_del;
			std::cout << "������ ���� �̸��� �Է��ϼ���." << endl;
			std::cin >> input_title_del;
			file_control.DeleteFile(input_title_del);
			break;

		case 7:
			string input_title_dw;
			std::cout << "�ٿ�ε��� ���� �̸��� �Է��ϼ���." << endl;
			std::cin >> input_title_dw;
			file_control.DownroadFile(input_title_dw);
			break;

		default:
			cout << "�׸� ���� �����Դϴ�." << endl;
			break;
		}
	}
}



