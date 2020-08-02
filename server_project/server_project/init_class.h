#pragma once

#include "include.h"

class AdminModeFunction
{
public:

	struct AdminInfo
	{
		//관리자 로그인
		string m_adminCode;
		bool m_admin_login_state{ false };

		//기본 코드 0000 초기화
		AdminInfo()
		{
			m_adminCode = "0000" ;
		};

	} Admin_info;


	AdminModeFunction();
	~AdminModeFunction();


	AdminInfo admin;
	ServerCapacity server_capacity;

	//처음 관리인 인증하기 위한 코드 인증 함수
	int CheckCode(char inputed)
	{
		char codeasdf;//기존 코드

		if (inputed == codeasdf)
		{
			bool* ptr = &admin.m_admin_login_state;
			*ptr = true;
			
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//코드 바꾸기
	void ChangeAdminCode()
	{
		char pre; //기존 코드
		string* ptr = &AdminFunction.Admin_info.m_adminCode;
		*ptr = pre;
	}

	void ShowUserInfo()
	{
		//유저 struc에서 배열 가져옴.
		array List;

		for (int i = 0; i < List.length; i++)
		{
			std::cout << "Index" << i << List[i] << endl;
		}
	}

	void Sharding()
	{

		//전체용량을 가져옴
		double* ptr= &server_capacity.m_storage_capacity;

		std::cout << "전체 시스템 용량을 증설합니다." << std::endl;
		std::cout << "현재 전체 용량: " <<  *ptr << std::endl;
		*ptr += 51200;
		std::cout << "증설 후 전체 용량: " << *ptr << std::endl;
	}

	void WaitingUserInfo() 
	{
		array pre_user_list;

		for (int i = 0; i < List.length; i++)
		{
			std::cout << "Index" << i << List[i] << endl;
		}
	}
	
private:
};

AdminModeFunction::AdminModeFunction()
{
}

AdminModeFunction::~AdminModeFunction()
{
}



/* ####### 파일 ####### */
class File
{
public:
	struct FileInfo
	{
		string m_name;
		double m_volume;
		map<string, double> m_fileID;

		FileInfo() {};
		~FileInfo() {};

		//파일 목록 출력
		void ShowFileList()
		{
			map<string, double>::iterator iter;

			int index;
			for (iter = m_fileID.begin(); iter != m_fileID.end(); iter++) 
			{
				std::cout << "index" << index;
				cout << iter->second << endl;
				index++;
			}
		}

		//다운로드
		void DownloadFile(string title)
		{
			int yes_or_no = m_fileID.count(title);
			
			if (yes_or_no == 1)
			{
				std::cout << "해당 파일은 다운로드가 가능합니다." << endl;
			}
			else
			{
				std::cout << "해당 파일은 다운로드가 불가능합니다." << endl;
			}
		}

		//업로드
		void UploadFile(string title, double volume)
		{
			m_fileID.insert(make_pair(title, volume));
		}

		//파일 삭제
		void DeleteFile(string title)
		{
			m_fileID.erase(title);
		}

	private:

	};

	File();
	~File();

	FileInfo info;

	//파일 업로드
	void UploadFile(string title, double volum)
	{
		info.UploadFile(title, volum);
	}


	//파일 다운로드
	void DownroadFile(string input)
	{
		info.ShowFileList();
		info.DownloadFile(input);
	}


	//파일 삭제
	void DeleteFile(string input_name) 
	{
		info.ShowFileList();
		info.DeleteFile(input_name);
	}

private:

};

File::File()
{
}

File::~File()
{
}

/* ####### 서버 용량 ####### */
struct ServerCapacity
{

	double m_storage_capacity; //MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding; //증설 가능 횟수

	//파일 이름 배열: 파일 삭제

	//파일크기 배열: 현재 용량 계산
	<array> m_file_volume;

	//기본 용량 50G, 용량 추가 3번
	ServerCapacity()
	{
		51200, 0, 0, 3;
	};
	/*
		m_storage_capacity = 51200;
		m_used_capacity = 0;
		m_avaible_capacity = 0;
		m_count_sharding = 3;
	*/
	~ServerCapacity() {};

} Server_capacity;

/* ####### 서버 클래스 ####### */

class Server
{
public:

		/* ####### 용량 ####### */
	class ServerCapacity
	{
	public:


		void SendStorageCapacity()
		{
			std::cout << ServerCapacity. //m_storage_capacity << std::endl;
		}

		//사용된 용량 계산
		void CalculateCapacity()
		{
			double used_capacity;



			//각 파일의 용량의 합
			for (int i = 0; i > <array> file_volume.sizeof; i++)
			{
				used_capacity += <array> file_volume[i];
			}

			//남은 용량 초기화
			server_capacity.m_used_capacity = used_capacity;

			//전체 용량-사용된 용량 = 남은 용량
			server_capacity.m_avaible_capacity = server_capacity.m_storage_capacity - used_capacity;

		}

	};


//가입한 유저 저장 및 전송

//암호화

	private:

};


//유저를 표현하기 위한 기본 자료구조
struct UserInfo
{
	//최대 10자
	//최소 8자, 최대 12자
	//주민번호, ""-""제외
	string m_ID;
	string m_password;
	string m_userID_number;

	map<string, string> m_account_IDPW; //ID+PW
	map<string, string> m_account_ID_number; //주민 번호 + ID

	vector<string*> m_userID_array; //주민 번호 검색용 
	vector<string> m_pre_join_user_list; //승인 이전 유저 들
	vector<string> m_joined_user_list; //승인된 유저 목록

	//로그인 상태 확인
	bool login_state = false;
	string user; // 로그인한 유저 ID
	int m_authority_level[3]{ 1,0,0 }; //유저에게 승인된 권한 레벨 Read, Write, both RW


	UserInfo() {};
	~UserInfo() {};

	auto m_SearchID(string search_ID)
	{
		return find(m_userID_array.begin(), m_userID_array.end(), search_ID);
	}



};


class JoinMode
{
public:
	
	JoinMode();
	~JoinMode();
	
	UserInfo user;

	//주민번호를 배열에 저장
	//저장하기 전에 기존 배열에서 입력된 값이 존재하는지 확인
	void SaveID(string search_ID)
	{
		string &respone_value = user.m_SearchID(search_ID);
		if (respone_value == search_ID)
		{
			std::cout << "이미 회원가입이된 주민등록번호입니다." << endl;
		}
	}

	//pw조건: 영어 대소문자 및 숫자, 8자 이상, 주민등록번호
	void PasswordCondition(string inputed_pw)
	{

	}

	//회원가입 유저의 정보를 배열에 추가
	void SaveUserAccount(string ID, string PW)
	{
		user.m_account_IDPW.insert(make_pair(ID,PW));
	}

	//관리자 승인을 위한 유저정보 배열 만들기
	void CopyUserAccount()
	{
		user.m_account_IDPW; //배열 복사
		user.m_pre_join_user_list;//최근 데이터 인풋
	}

	void AcceptUsers()
	{
		user.m_joined_user_list; //저장
	}

	void ShowAcceptUsers()
	{
		user.m_joined_user_list; //for 출력
	}

private:

};

JoinMode::JoinMode()
{
}

JoinMode::~JoinMode()
{
}