#include <iostream>


	//m_arrary_index= id�� �迭�� ũ�⸦ ������ ���̴�.

struct UserInfo	// **����ڸ� ǥ���ϱ� ���� �⺻ �ڷᱸ��
{

	UserInfo() {};

	//�Է� ���� id�� �迭�� �������� ������ �迭�� �߰�
	UserInfo(input)
	{
		if (input != arrary_id) array_id = input
	}

	//���� ���� �ʱ�ȭ
	UserInfo(int id, int password, int authority_level, int dormant_account)
		:m_id(id),
		m_password(password),
		m_authority_level(authority_level),
		m_dormant_account(dormant_account) {}
	~UserInfo() {};



	char m_id;	//user ID
	vectory* arrary_id;// user ID �迭 

	char m_password;// user Password
	vectory* array_password; // User Password �迭

	int user_id_number;	//�ֹι�ȣ
	int m_authority_level;	//���� ����
	bool m_dormant_account; //�޸հ���
	bool check_passed; //���� ��� ���¿� �ִ� ���� ��
};
//UserInfo


//�����ڸ� ǥ���ϱ� ���� �⺻ �ڷᱸ��
struct AdminInfo
{
	AdminInfo(){}



private:
	std::string m_admin_code;

};
//AdminInfo


//������ ǥ���ϱ� ���� �⺻ �ڷᱸ��
class ServerInfo
{
public:

	ServerInfo() {};
	~ServerInfo() {};

	//���� ��ü�뷮
	int m_storage_capacity;
	//���� ���뷮
	double m_used_capacity;
	//��밡�� �뷮
	double m_avaible_capacity;
	//����ũ��
	double file_vlume;

private:
	//user_data �ֹι�ȣ, pass
};
//ServerInfo


class UserMode : public UserInfo
{

public:
	//�ʿ��� ����Լ�

		/*
	���� �����ϴ� ���� ���� ����
	�ٸ� ���� �迭�� index�� ��������
	�����ڿ��� ���� ���� ���� ��,
	*/
	vector.size(arrary_ID)
	{
		this.arrary_index;
		return;
	}

	//���� ���Ե� ������ �´��� Ȯ���ϴ� �Լ�
	CheckUserId(char input_id)
	{
		arrary_id

	}

	if(check_passed == 0)
	{

	}


private:
	struct UserInfo user
	{
		//���� ���� ����
		define_authority() {}

		//���� ���� �޾ƿ���
		take_authority_level() {}
	};
};
//UserMode


class AdminMode : public AdminInfo
{

public:
	//�ʿ��� ����Լ�

	//USER_INFO.check_passed�� ������ �� �ִ� �Լ�

	//������ �ڵ� ���� ,�⺻ 0000
	AdminMode(int input)
		:m_admin_code(input) {}

private:

	struct AdminInfo admin;

};
//AdminMode


class Server :public ServerInfo
{
public:
	//�ʿ��� ����Լ�

	//���� ���ε�

	//���� ����

	//���� �ٿ�ε�

	//�ϵ� �뷮 ����

	//������ ���� ���� �� ����

	//��ȣȭ

private:
	struct ServerInfo server;

};
//Server