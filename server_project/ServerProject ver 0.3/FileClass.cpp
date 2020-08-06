#include "FileClass.h"

File::~File()
{
	delete info;
}

void File::UploadFile(string title, double volum)
{
	//서버 용량을 받아옴.
	double capacity{ 1 };
	double available_capacity = capacity - volum;

	if (available_capacity > 0)
	{
		info->UploadFile(title, volum);
	}
	else
	{
		cout << "용량이 커서 업로드 불가능합니다." << endl;
	}
}


void File::DownroadFile(string input)
{
	info->ShowFileList();

	cout << "------------------------" << endl;
	cout << "파일 명을 입력해주세요" << endl;
	cin >> input;
	info->CheckDownloadFile(input);
}


void File::DeleteFile(string input_name)
{
	info->ShowFileList();

	cout << "------------------------" << endl;
	cout << "파일 명을 입력해주세요" << endl;
	cin >> input_name;
	info->DeleteFile(input_name);
}