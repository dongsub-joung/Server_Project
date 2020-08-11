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
		bool spell = CheckSpell(m_password);
		bool length = CheckLength(m_password);
		bool overlap_control = CheckNumber(m_password);

		CheckPassword(spell, length, overlap_control);
	} while (m_password_control);

	SavePreUser(&preUser);
}


void Join::SavePreUser(PreUser* preUser)
{
	preuser_info->m_preuser_ID = m_id;
	preuser_info->m_preuser_PW = m_password;
	preuser_info->m_preuser_ID_number = m_user_id_number;
}


bool Join::CheckSpell(const string password)
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


bool Join::CheckLength(const string password)
{
	string pw = password;
	int pw_size = pw.size();
	if (pw_size > 8)
	{
		return true;
	}
	else
	{
		cout << "8�� �̻� �Է��ϼ���." << endl;
	}
}


bool Join::CheckNumber(const string password)
{
	string pw = password;
	string id_num = m_user_id_number;
	if (id_num != pw)
	{
		return true;
	}
	else
	{
		cout << "�ֹι�ȣ�� ��ġ�ϴ� ��й�ȣ�Դϴ�." << endl;
	}
}


void Join::CheckPassword(const bool spell, const bool length, const bool overlap)
{
	if (spell && length && overlap)
	{
		this->m_password_control = false;
	}
	else
	{
		cout << "Password ���ǿ� ��ġ���� �ʽ��ϴ�." << endl;
	}
}


bool Join::CheckUserIdNumber(const string m_user_id_number)
{
	int char_size = m_user_id_number.size();

	if (char_size <= 13)
	{
		return false;
	}
	else
	{
		cout << "�ֹε�� ��ȣ�� 13�ڸ� �Դϴ�." << endl;
	}
}