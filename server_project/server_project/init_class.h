#pragma once

#include "include.h"

class AdminModeFunction
{
public:

	struct AdminInfo
	{
		//������ �α���
		string m_adminCode;
		bool m_admin_login_state{ false };

		//�⺻ �ڵ� 0000 �ʱ�ȭ
		AdminInfo()
		{
			m_adminCode = "0000" ;
		};

	} Admin_info;


	AdminModeFunction();
	~AdminModeFunction();


	AdminInfo admin;
	ServerCapacity server_capacity;

	//ó�� ������ �����ϱ� ���� �ڵ� ���� �Լ�
	int CheckCode(char inputed)
	{
		char codeasdf;//���� �ڵ�

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

	//�ڵ� �ٲٱ�
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
		double* ptr= &server_capacity.m_storage_capacity;

		std::cout << "��ü �ý��� �뷮�� �����մϴ�." << std::endl;
		std::cout << "���� ��ü �뷮: " <<  *ptr << std::endl;
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
	
private:
};

AdminModeFunction::AdminModeFunction()
{
}

AdminModeFunction::~AdminModeFunction()
{
}



/* ####### ���� ####### */
class File
{
public:
	struct FileInfo
	{
		string m_name;
		double m_volume;
		map<string, double> m_fileID;

		FileInfo() {};
		~FileInfo() {};

		//���� ��� ���
		void ShowFileList()
		{
			map<string, double>::iterator iter;

			int index;
			for (iter = m_fileID.begin(); iter != m_fileID.end(); iter++) 
			{
				std::cout << "index" << index;
				cout << iter->second << endl;
				index++;
			}
		}

		//�ٿ�ε�
		void DownloadFile(string title)
		{
			int yes_or_no = m_fileID.count(title);
			
			if (yes_or_no == 1)
			{
				std::cout << "�ش� ������ �ٿ�ε尡 �����մϴ�." << endl;
			}
			else
			{
				std::cout << "�ش� ������ �ٿ�ε尡 �Ұ����մϴ�." << endl;
			}
		}

		//���ε�
		void UploadFile(string title, double volume)
		{
			m_fileID.insert(make_pair(title, volume));
		}

		//���� ����
		void DeleteFile(string title)
		{
			m_fileID.erase(title);
		}

	private:

	};

	File();
	~File();

	FileInfo info;

	//���� ���ε�
	void UploadFile(string title, double volum)
	{
		info.UploadFile(title, volum);
	}


	//���� �ٿ�ε�
	void DownroadFile(string input)
	{
		info.ShowFileList();
		info.DownloadFile(input);
	}


	//���� ����
	void DeleteFile(string input_name) 
	{
		info.ShowFileList();
		info.DeleteFile(input_name);
	}

private:

};

File::File()
{
}

File::~File()
{
}

/* ####### ���� �뷮 ####### */
struct ServerCapacity
{

	double m_storage_capacity; //MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding; //���� ���� Ƚ��

	//���� �̸� �迭: ���� ����

	//����ũ�� �迭: ���� �뷮 ���
	<array> m_file_volume;

	//�⺻ �뷮 50G, �뷮 �߰� 3��
	ServerCapacity()
	{
		51200, 0, 0, 3;
	};
	/*
		m_storage_capacity = 51200;
		m_used_capacity = 0;
		m_avaible_capacity = 0;
		m_count_sharding = 3;
	*/
	~ServerCapacity() {};

} Server_capacity;

/* ####### ���� Ŭ���� ####### */

class Server
{
public:

		/* ####### �뷮 ####### */
	class ServerCapacity
	{
	public:


		void SendStorageCapacity()
		{
			std::cout << ServerCapacity. //m_storage_capacity << std::endl;
		}

		//���� �뷮 ���
		void CalculateCapacity()
		{
			double used_capacity;



			//�� ������ �뷮�� ��
			for (int i = 0; i > <array> file_volume.sizeof; i++)
			{
				used_capacity += <array> file_volume[i];
			}

			//���� �뷮 �ʱ�ȭ
			server_capacity.m_used_capacity = used_capacity;

			//��ü �뷮-���� �뷮 = ���� �뷮
			server_capacity.m_avaible_capacity = server_capacity.m_storage_capacity - used_capacity;

		}

	};


//������ ���� ���� �� ����

//��ȣȭ

	private:

};


//������ ǥ���ϱ� ���� �⺻ �ڷᱸ��
struct UserInfo
{
	//�ִ� 10��
	//�ּ� 8��, �ִ� 12��
	//�ֹι�ȣ, ""-""����
	string m_ID;
	string m_password;
	string m_userID_number;

	map<string, string> m_account_IDPW; //ID+PW
	map<string, string> m_account_ID_number; //�ֹ� ��ȣ + ID

	vector<string*> m_userID_array; //�ֹ� ��ȣ �˻��� 
	vector<string> m_pre_join_user_list; //���� ���� ���� ��
	vector<string> m_joined_user_list; //���ε� ���� ���

	//�α��� ���� Ȯ��
	bool login_state = false;
	string user; // �α����� ���� ID
	int m_authority_level[3]{ 1,0,0 }; //�������� ���ε� ���� ���� Read, Write, both RW


	UserInfo() {};
	~UserInfo() {};

	auto m_SearchID(string search_ID)
	{
		return find(m_userID_array.begin(), m_userID_array.end(), search_ID);
	}



};


class JoinMode
{
public:
	
	JoinMode();
	~JoinMode();
	
	UserInfo user;

	//�ֹι�ȣ�� �迭�� ����
	//�����ϱ� ���� ���� �迭���� �Էµ� ���� �����ϴ��� Ȯ��
	void SaveID(string search_ID)
	{
		string &respone_value = user.m_SearchID(search_ID);
		if (respone_value == search_ID)
		{
			std::cout << "�̹� ȸ�������̵� �ֹε�Ϲ�ȣ�Դϴ�." << endl;
		}
	}

	//pw����: ���� ��ҹ��� �� ����, 8�� �̻�, �ֹε�Ϲ�ȣ
	void PasswordCondition(string inputed_pw)
	{

	}

	//ȸ������ ������ ������ �迭�� �߰�
	void SaveUserAccount(string ID, string PW)
	{
		user.m_account_IDPW.insert(make_pair(ID,PW));
	}

	//������ ������ ���� �������� �迭 �����
	void CopyUserAccount()
	{
		user.m_account_IDPW; //�迭 ����
		user.m_pre_join_user_list;//�ֱ� ������ ��ǲ
	}

	void AcceptUsers()
	{
		user.m_joined_user_list; //����
	}

	void ShowAcceptUsers()
	{
		user.m_joined_user_list; //for ���
	}

private:

};

JoinMode::JoinMode()
{
}

JoinMode::~JoinMode()
{
}