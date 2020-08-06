#pragma once

#include "Default_Include.h"
#include "UserInfo.h"

class Join
{
public:

	void init_Join();

private:
	UserData user_data;

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
