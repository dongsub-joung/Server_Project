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

	cout << "-----���ε�-----" << endl;
	cout << "���� ���� �Է����ּ���" << endl;
	cin >> title;
	cout << "���� �뷮�� �Է����ּ���(MB)" << endl;
	cin >> volum;

	double check_volum = available_capacity - volum;
	if (check_volum > 0)
	{
		info->UploadFile(title, volum);
	}
	else
	{
		cout << "�뷮�� Ŀ�� ���ε� �Ұ����մϴ�." << endl;
	}
}


void File::DownroadFile()
{
	info->ShowFileList();

	cout << "------------------------" << endl;
	cout << "���� ���� �Է����ּ���" << endl;
	string input;
	cin >> input;
	info->CheckDownloadFile(input);
}


void File::DeleteFile()
{
	info->ShowFileList();

	cout << "------------------------" << endl;
	cout << "���� ���� �Է����ּ���" << endl;
	string input_name;
	cin >> input_name;
	info->DeleteFile(input_name);
}