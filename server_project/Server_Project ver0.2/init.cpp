#include "Default_Include.h"
#include "UserInfo, Data.h"

enum Main_Selection
{
	Select_UserMode = 1,
	Select_AdminMode = 2,
	Select_JoinMode = 3
};


void main()
{
	std::cout << "1. 사용자 모드" << endl;
	std::cout << "2. 관리자 모드" << endl;
	std::cout << "3. 회원 가입 요청" << endl;

	int select_mode;
	cin >> select_mode;
	
	switch (select_mode)
	{
	case Select_UserMode:
		
		break;
	case Select_AdminMode:
		
		break;
	case Select_JoinMode:
		
		break;
	default:
		cout << "항목에 없는 숫자입니다." << endl;
		break;
	}
}