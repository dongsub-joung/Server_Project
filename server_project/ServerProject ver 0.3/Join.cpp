#include "Join.h"

void Join::InitJoin()
{
	cout << "---- Join ----" << endl;

	do
	{
		cout << "주민 번호를 입력해주세요." << endl;
		cin >> m_user_id_number;
	} while (CheckUserIdNumber(m_user_id_number));

	std::cout << "ID를 입력해주세요." << endl;
	cin >> m_id;

	do
	{
		cout << "Pass Word를 입력해주세요." << endl;
		cout << "------------------------------" << endl;
		cout << "* 영어 대소문자 및 숫자만" << endl;
		cout << "* 8자 이상" << endl;
		cout << "* 주민번호 미포함" << endl;
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
		cout << "대소문자 및 숫자 이외의 것을 입력하였습니다." << endl;
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
		cout << "8자 이상 입력하세요." << endl;
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
		cout << "주민번호와 일치하는 비밀번호입니다." << endl;
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
		cout << "Password 조건에 일치하지 않습니다." << endl;
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
		cout << "주민등록 번호는 13자리 입니다." << endl;
	}
}