/**
*@brief			Common: File Functions(Read, Write, Delete)
*@details		Input data and Save in struct `FileInfo`
*@author		Joung Dong Sub
*@version		0.0.3
*/

#include "FileClass.h"

File::~File()
{
	delete info;
}

void File::UploadFile(double available_capacity)
{
	string title;
	double volum;

	cout << "-----업로드-----" << endl;
	cout << "파일 명을 입력해주세요" << endl;
	cin >> title;
	cout << "파일 용량을 입력해주세요(MB)" << endl;
	cin >> volum;

	double check_volum = available_capacity - volum;
	if (check_volum > 0)
	{
		info->UploadFile(title, volum);
	}
	else
	{
		cout << "용량이 커서 업로드 불가능합니다." << endl;
	}
}


void File::DownroadFile()
{
	info->ShowFileList();

	cout << "------------------------" << endl;
	cout << "파일 명을 입력해주세요" << endl;
	string input;
	cin >> input;
	info->CheckDownloadFile(input);
}


void File::DeleteFile()
{
	info->ShowFileList();

	cout << "------------------------" << endl;
	cout << "파일 명을 입력해주세요" << endl;
	string input_name;
	cin >> input_name;
	info->DeleteFile(input_name);
}