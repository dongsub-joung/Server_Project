#include "include.h"

using namespace std;

//*enum


enum selection_FileControl
{
	FileDownload = 1,
	FileUpload = 2,
	FileDelete = 3
};


//*���� ����


//*struct
File file_control;
UserInfo user_info;

//*class
AdminModeFunction AdminFunction = AdminModeFunction();
JoinMode join_control = JoinMode();



void main()
{
	
	//���� �޴� ���
	std::cout << "1. ����� ���" << endl;
	std::cout << "2. ������ ���" << endl;
	std::cout << "3. ȸ�� ���� ��û" << endl;


	switch (select_mode)
	{
	//**����ڸ��
	case Select_UserMode:

		int inputedID;
		string inputedPassword;

		cout << "id :" << endl;
		cin >> inputedID;
		cout << "password :" << endl;
		cin >> inputedPassword;

		//ȸ������, ������ ����
		Login(inputedID, inputedPassword);

		if (user_info.m_admin_accpt)
		{
			Read_ServerInfo();

			cout << "���� ��ü �뷮: " <<  <<endl;
			cout << "���� ��� �뷮: " <<  <<endl;
			cout << "��� ���� �뷮: " <<  <<endl;

			cout << "1. ���� �ٿ�ε�" << endl;
			cout << "2. ���� ���ε� " << endl;
			cout << "3. ���� ���� " << endl;
			cout << "�̿��Ͻ� ���� ��ȣ�� �Է��ϼ���." << endl;

			int selected_service_Num;
			cin >> selected_service_Num;
			
			switch (selected_service_Num)
			{
			case FileDownload:
				if ((m_authority_level[0] == 1) || (m_authority_level[2] == 1))
				{
					string input_title_dw;
					std::cout << "�ٿ�ε��� ���� �̸��� �Է��ϼ���." << endl;
					std::cin >> input_title_dw;
					file_control.DownroadFile(input_title_dw);
				}
				break;

			case FileUpload:
				if ((m_authority_level[1] == 1) || (m_authority_level[2] == 1))
				{
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
				}
				break;

			case FileDelete:
				string input_title_del;
				std::cout << "������ ���� �̸��� �Է��ϼ���." << endl;
				std::cin >> input_title_del;
				file_control.DeleteFile(input_title_del);
				break;

			default:
				cout << "�׸� ���� �����Դϴ�." << endl;
				break;
			}
		}
		else
		{
			cout << "ȸ�������� ���� ���� ȸ���Դϴ�." << endl;
		}

		//**������ ���
	case Select_AdminMode:

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

	case Select_JoinMode:
		cout << "ȸ�������� �����մϴ�." << endl;

		string id;
		string password;
		string user_id_number;
		
		cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
		cin >> user_id_number;
		user_info.m_SearchID(user_id_number);

		std::cout << "ID�� �Է����ּ���." << endl;
		cin >> id;
		cout << "PassWord�� �Է����ּ���. ���� ��ҹ��� �� ����, 8�� �̻�" << endl;
		cin >> password;
		join_control.SaveUserAccount(id, password);

		

	default:
		cout << "�׸� ���� �����Դϴ�." << endl;
	}
}