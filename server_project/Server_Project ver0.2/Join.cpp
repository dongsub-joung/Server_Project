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
	cout << "주민번호를 포함하는 비밀번호입니다." << endl;

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
		cout << "Password 조건에 일치하지 않습니다." << endl;
	}
}
void Join::AddUserData(string id, string password)
{

	
}

void Join::init()
{
	cout << "Join" << endl;

	cout << "주민 번호를 입력해주세요." << endl;
	cin >> user_id_number;

	std::cout << "ID를 입력해주세요." << endl;
	cin >> id;

	do
	{
		cout << "PassWord를 입력해주세요."<< endl;
		cout << "*영어 대소문자 및 숫자만" << endl;
		cout << "*8자 이상" << endl;
		cout << "*주민번호 미포함" << endl;
		cin >> password;
		CheckPassword(password);

	} while (checked_password);
	
	AddUserData(id, password);
}