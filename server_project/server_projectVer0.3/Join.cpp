/**
*@brief			Init Join
*@details
*			Join UI
*			Filter PW
*			Save User ID Number
*			Encoding Password used SHA 256 
*@author		Joung Dong Sub
*version		0.0.3
*/

#include "Join.h"

void Join::InitJoin()
{
	cout << "---- Join ----" << endl;

	do
	{
		cout << "Please, Enter the your's My Number >\n" << endl;
		cin >> m_user_id_number;
	} while (CheckUserIdNumber(m_user_id_number));

	do
	{
		cout << "Please, Enter the your's ID >\n" << endl;
		cin >> m_id;
		int string_condition_alter= 1; authConditions(string_condition_alter);
	} while (CheckSpell(m_id));
	
	do
	{
		cout << "$ Certificate Serial Number $\n" << endl;
		cout << "------------------------------" << endl;
		int normal= 0; authConditions(normal);
		cin >> m_password;

		bool spell = CheckSpell(m_password);
		bool length = CheckLength(m_password);
		bool overlap_control = CheckNumber(m_password);

		CheckPassword(spell, length, overlap_control);
	} while (m_password_control);

	SavePreUser();
}

/**
*@todo
*		preuser_info->m_preuser_ID_number = m_user_id_number;
*		vector<BYTE> hased: having the hashed My Number.
*/
// void Join::SavePreUser()
// {
// 	preuser_info->m_preuser_ID = m_id;
// 	preuser_info->m_preuser_PW = m_password;

// 	sha256_join.HashUserInfo();
// }

void Join::authConditions(int number)
{
	enum case{
		normal= 	 0;
		deny_spell=  1;
		deny_length= 2;
		deny_social= 3;
	}

	switch (number)
	{
		case normal:
			for (size_t i = 1; i <= 3; i++)
			{
				authConditions(i);
			}
			break;
		case deny_spell:
			cout << "a-z, A-Z, Numbers Only \n";
			break;
		case deny_length
			cout << "Over 8 Characters\n";
			break;
		case deny_social
			cout << "Warning Social Engineering like Pat name, Personal Number ETC\n" << endl;
			break;
		default:
			cout << "ERR"; 
			break;
	}
	
}

bool Join::CheckSpell(const string password)
{
	string pw = password;
	regex spell("^[A-za-z0-9]*$");
	if (regex_match(pw, spell) == pw.size()) return true;
	else
	{
		cout << "Deny the work. please, do again.\n" << endl;
		int case01= 1; authConditions(case01)
	}
}


bool Join::CheckLength(const string password)
{
	string pw = password;
	int pw_size = pw.size();
	if (pw_size > 8) return true;
	else
	{
		int case02= 2; authConditions(case02); authConditions(case02)
	}
}


bool Join::CheckNumber(const string password)
{
	string pw = password;
	string id_num = m_user_id_number;
	if (id_num != pw) return true;
	else
	{
		int case03= 3; authConditions(case03); authConditions(case03)
	}
}


void Join::CheckPassword(const bool spell, const bool length, const bool overlap)
{
	if (spell && length && overlap) this->m_password_control = false;
	else authConditions(-1);
}


bool Join::CheckUserIdNumber(const string m_user_id_number)
{
	int char_size = m_user_id_number.size();

	if (char_size <= 13) return false;
	else
	{
		cout << "Fit in the 13 Characters \n" << endl;
	}
}