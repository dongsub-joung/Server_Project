#include "Default_Include.h"
#include "UserInfo, Data.h"

class Join
{
public:
	Join();
	~Join();

	void init();

private:
	string id;
	string password;
	string user_id_number;

	bool passed_spell{ false };
	bool passed_length{ false };
	bool passed_number{ false };
	bool checked_password{ false };

	void CheckPassword(string password);
	bool CheckSpell(string password);
	bool CheckLength(string password);
	bool CheckNumber(string password);

	void AddUserData(string id, string password);
};

Join::Join()
{
}

Join::~Join()
{
}

bool Join::CheckSpell(string password)
{
	passed_spell = true;
}
bool Join::CheckLength(string password)
{
	passed_length = true;
}
bool Join::CheckNumber(string password)
{
	cout << "�ֹι�ȣ�� �����ϴ� ��й�ȣ�Դϴ�." << endl;

	passed_number = true;
}

void Join::CheckPassword(string password)
{
	CheckSpell(password);
	CheckLength(password);
	CheckNumber(password);

	if (passed_spell && passed_length && passed_number)
	{
		checked_password = true;
	}
	else
	{
		cout << "Password ���ǿ� ��ġ���� �ʽ��ϴ�." << endl;
	}
}
void Join::AddUserData(string id, string password)
{

	
}

void Join::init()
{
	cout << "Join" << endl;

	cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
	cin >> user_id_number;

	std::cout << "ID�� �Է����ּ���." << endl;
	cin >> id;

	do
	{
		cout << "PassWord�� �Է����ּ���."<< endl;
		cout << "*���� ��ҹ��� �� ���ڸ�" << endl;
		cout << "*8�� �̻�" << endl;
		cout << "*�ֹι�ȣ ������" << endl;
		cin >> password;
		CheckPassword(password);

	} while (checked_password);
	
	AddUserData(id, password);
}