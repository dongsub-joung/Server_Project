#include "FileStruct.h"
#include "ServerCapacity.h"

//UserMode.cpp ���� File�� ���� Ŭ����
class File
{
public:

	FileInfo info;
	
	void UploadFile(string title, double volum);//���� ���ε�
	void DownroadFile(string input);			//���� �ٿ�ε�
	void DeleteFile(string input_name);			//���� ����

private:

};


void File::UploadFile(string title, double volum)
{
	//���� �뷮�� �޾ƿ�.
	double capacity{ 1 };
	double available_capacity = capacity - volum;

	if (available_capacity > 0)
	{
		info.UploadFile(title, volum);
	}
	else
	{
		cout << "�뷮�� Ŀ�� ���ε� �Ұ����մϴ�." << endl;
	}
}



void File::DownroadFile(string input)
{
	info.ShowFileList();

	cout << "------------------------" << endl;
	cout << "���� ���� �Է����ּ���" << endl;
	cin >> input;
	info.CheckDownloadFile(input);
}



void File::DeleteFile(string input_name)
{
	info.ShowFileList();

	cout << "------------------------" << endl;
	cout << "���� ���� �Է����ּ���" << endl;
	cin >> input_name;
	info.DeleteFile(input_name);
}