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
	} while (CheckPassword(m_password));
	
}

//arrray에 데이터를 저장
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
		cout << "대소문자 및 숫자 이외의 것을 입력하였습니다." << endl;
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
		cout << "8자 이상 입력하세요." << endl;
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
		cout << "주민번호와 일치하는 비밀번호입니다." << endl;
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
		cout << "Password 조건에 일치하지 않습니다." << endl;
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
		cout << "주민등록 번호는 13자리 입니다." << endl;
	}
}