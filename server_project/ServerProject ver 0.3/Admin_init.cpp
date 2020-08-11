#include "Admin_init.h"

void AdminModeFunction::InitAdminMode()
{
	CheckCode(string inputed);
	std::cout << "4자리 Code를 입력해주세요.: " << endl;
	std::cout << "Code: " << endl;
	char inputed[4];
	cin >> inputed;
	//구현하면 좋은 것) 4자리 넘었을 경우 오버플로우를 제안하는 기능

	//코드가 true면
	if (AdminFunction.CheckCode(inputed[4]))
	{
		cout << "1. 관리자 코드 변경" << endl;
		cout << "2. 가입한 유저 정보 " << endl;
		cout << "3. 하드용량 추가" << endl;
		cout << "4. 대기중인 유저정보" << endl;
		cout << "5. 파일 업로드 " << endl;
		cout << "6. 파일 삭제 " << endl;
		cout << "7. 파일 다운로드" << endl;

		int selected_admin_opt; //관리자 서비스 분기
		cin >> selected_admin_opt;

		switch (selected_admin_opt)
		{
		case 1:
			AdminFunction.ChangeAdminCode();
			break;

		case 2:
			AdminFunction.ShowUserInfo();
			break;

		case 3:
			AdminFunction.Sharding();
			break;

		case 4:
			AdminFunction.WaitingUserInfo();
			break;

		case 5:
			string input_title_up;
			double input_volume;
			std::cout << "업로드할 파일 이름을 입력하세요." << endl;
			std::cin >> input_title_up;
			std::cout << "업로드할 파일의 용량을 MB로 입력하세요." << endl;
			std::cin >> input_volume;

			double presnt; //현재 남은 용량 - 파일 용량
			if ((presnt - input_volume) > 0)
			{
				file_control.UploadFile(input_title_up, input_volume);
			}
			break;

		case 6:
			string input_title_del;
			std::cout << "삭제할 파일 이름을 입력하세요." << endl;
			std::cin >> input_title_del;
			file_control.DeleteFile(input_title_del);
			break;

		case 7:
			string input_title_dw;
			std::cout << "다운로드할 파일 이름을 입력하세요." << endl;
			std::cin >> input_title_dw;
			file_control.DownroadFile(input_title_dw);
			break;

		default:
			cout << "항목에 없는 숫자입니다." << endl;
			break;
		}
	}
}



