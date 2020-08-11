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
	std::cout << "1. ����� ���" << endl;
	std::cout << "2. ������ ���" << endl;
	std::cout << "3. ȸ�� ���� ��û" << endl;

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
			cout << "�׸� ���� �����Դϴ�." << endl;
			continue;
		}
	} while (true);

	return 0;
}