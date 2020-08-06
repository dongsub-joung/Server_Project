#include "Join.h"

void Join::init_Join()
{
	cout << "Join" << endl;

	cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
	cin >> user_id_number;

	std::cout << "ID�� �Է����ּ���." << endl;
	cin >> id;

	do
	{
		cout << "PassWord�� �Է����ּ���." << endl;
		cout << "*���� ��ҹ��� �� ���ڸ�" << endl;
		cout << "*8�� �̻�" << endl;
		cout << "*�ֹι�ȣ ������" << endl;
		cin >> password;
		CheckPassword(password);

	} while (checked_password);

	AddUserData(id, password);
}

bool Join::CheckSpell(string password)
{
	password = "^[a-zA-Z]*$";

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
	PreUserInfo* pre_user = new PreUserInfo();
	pre_user->m_user_ID = id;
	pre_user->m_user_PW = password;
}