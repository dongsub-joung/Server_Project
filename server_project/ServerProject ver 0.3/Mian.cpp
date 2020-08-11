#include "UserMode.h"
#include "Admin_init.h"
#include "Join.h"

enum Main_Selection
{
	Select_UserMode = 1,
	Select_AdminMode = 2,
	Select_JoinMode = 3
};

UserMode user_mode;
AdminModeFunction admin_mode;
Join user_join;

int main()
{
	std::cout << "1. 사용자 모드" << endl;
	std::cout << "2. 관리자 모드" << endl;
	std::cout << "3. 회원 가입 요청" << endl;

	int select_mode;
	cin >> select_mode;
	do
	{
		switch (select_mode)
		{
		case Select_UserMode:
			user_mode.ShowServerCapacity();
			user_mode.init_UserMode();
			break;

		case Select_AdminMode:
			user_mode.ShowServerCapacity();
			admin_mode.InitAdminMode();
			break;

		case Select_JoinMode:
			user_join.InitJoin();
			break;

		default:
			cout << "항목에 없는 숫자입니다." << endl;
			continue;
		}
	} while (true);

	return 0;
}