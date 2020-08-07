#include "Join.h"

void Join::InitJoin()
{
	cout << "---- Join ----" << endl;

	do
	{
		cout << "�ֹ� ��ȣ�� �Է����ּ���." << endl;
		cin >> m_user_id_number;
	} while (CheckUserIdNumber(m_user_id_number));

	std::cout << "ID�� �Է����ּ���." << endl;
	cin >> m_id;
	
	do
	{
		cout << "Pass Word�� �Է����ּ���." << endl;
		cout << "------------------------------" << endl;
		cout << "* ���� ��ҹ��� �� ���ڸ�" << endl;
		cout << "* 8�� �̻�" << endl;
		cout << "* �ֹι�ȣ ������" << endl;
		cin >> m_password;
	} while (CheckPassword(m_password));
	
}

//arrray�� �����͸� ����
string Join::AddUserData()
{
#define USER_DATA 3
	string preuser_container[USER_DATA]{ m_id,m_password, m_user_id_number };
	return preuser_container[USER_DATA];
}


bool Join::CheckSpell(string password)
{
	string pw = password;
	regex spell("^[A-za-z0-9]*$");
	if (regex_match(pw, spell) == pw.size())
	{
		return true;
	}
	else
	{
		cout << "��ҹ��� �� ���� �̿��� ���� �Է��Ͽ����ϴ�." << endl;
	}
}


bool Join::CheckLength(string password)
{
	string pw = password;
	int pw_size = pw.size();
	if (pw_size>8)
	{
		return true;
	}
	else
	{
		cout << "8�� �̻� �Է��ϼ���." << endl;
	}
}


bool Join::CheckNumber(string password)
{
	string pw = password;
	if (m_user_id_number != pw)
	{
		return true;
	}
	else
	{
		cout << "�ֹι�ȣ�� ��ġ�ϴ� ��й�ȣ�Դϴ�." << endl;
	}	
}


bool Join::CheckPassword(string password)
{
	if (CheckSpell(password) && CheckLength(password) && CheckNumber(password))
	{
		return true;
	}
	else
	{
		cout << "Password ���ǿ� ��ġ���� �ʽ��ϴ�." << endl;
	}
}


bool Join::CheckUserIdNumber(string m_user_id_number)
{
	string user_id_number = m_user_id_number;
	int char_size = user_id_number.size();

	if (char_size == 13)
	{
		return true;
	}
	else
	{
		cout << "�ֹε�� ��ȣ�� 13�ڸ� �Դϴ�." << endl;
	}
}