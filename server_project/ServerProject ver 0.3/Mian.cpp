#include "UserMode.h"

enum Main_Selection
{
	Select_UserMode = 1,
	Select_AdminMode = 2,
	Select_JoinMode = 3
};


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

			break;

		case Select_AdminMode:

			break;

		case Select_JoinMode:

			break;

		default:
			cout << "�׸� ���� �����Դϴ�." << endl;
			continue;
		}
	} while (true);

	return 0;
}