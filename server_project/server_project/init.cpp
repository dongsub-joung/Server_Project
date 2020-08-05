#include "include.h"

using namespace std;

//*enum


enum selection_FileControl
{
	FileDownload = 1,
	FileUpload = 2,
	FileDelete = 3
};


//*전역 변수


//*struct
File file_control;
UserInfo user_info;

//*class
AdminModeFunction AdminFunction = AdminModeFunction();
JoinMode join_control = JoinMode();



void main()
{
	
	//메인 메뉴 출력
	std::cout << "1. 사용자 모드" << endl;
	std::cout << "2. 관리자 모드" << endl;
	std::cout << "3. 회원 가입 요청" << endl;


	switch (select_mode)
	{
	//**사용자모드
	case Select_UserMode:

		int inputedID;
		string inputedPassword;

		cout << "id :" << endl;
		cin >> inputedID;
		cout << "password :" << endl;
		cin >> inputedPassword;

		//회원가입, 관리자 승인
		Login(inputedID, inputedPassword);

		if (user_info.m_admin_accpt)
		{
			Read_ServerInfo();

			cout << "서버 전체 용량: " <<  <<endl;
			cout << "현재 사용 용량: " <<  <<endl;
			cout << "사용 가능 용량: " <<  <<endl;

			cout << "1. 파일 다운로드" << endl;
			cout << "2. 파일 업로드 " << endl;
			cout << "3. 파일 삭제 " << endl;
			cout << "이용하실 서비스 번호를 입력하세요." << endl;

			int selected_service_Num;
			cin >> selected_service_Num;
			
			switch (selected_service_Num)
			{
			case FileDownload:
				if ((m_authority_level[0] == 1) || (m_authority_level[2] == 1))
				{
					string input_title_dw;
					std::cout << "다운로드할 파일 이름을 입력하세요." << endl;
					std::cin >> input_title_dw;
					file_control.DownroadFile(input_title_dw);
				}
				break;

			case FileUpload:
				if ((m_authority_level[1] == 1) || (m_authority_level[2] == 1))
				{
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
				}
				break;

			case FileDelete:
				string input_title_del;
				std::cout << "삭제할 파일 이름을 입력하세요." << endl;
				std::cin >> input_title_del;
				file_control.DeleteFile(input_title_del);
				break;

			default:
				cout << "항목에 없는 숫자입니다." << endl;
				break;
			}
		}
		else
		{
			cout << "회원가입이 되지 않은 회원입니다." << endl;
		}

		//**관리자 모드
	case Select_AdminMode:

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

	case Select_JoinMode:
		cout << "회원가입을 진행합니다." << endl;

		string id;
		string password;
		string user_id_number;
		
		cout << "주민 번호를 입력해주세요." << endl;
		cin >> user_id_number;
		user_info.m_SearchID(user_id_number);

		std::cout << "ID를 입력해주세요." << endl;
		cin >> id;
		cout << "PassWord를 입력해주세요. 영어 대소문자 및 숫자, 8자 이상" << endl;
		cin >> password;
		join_control.SaveUserAccount(id, password);

		

	default:
		cout << "항목에 없는 숫자입니다." << endl;
	}
}