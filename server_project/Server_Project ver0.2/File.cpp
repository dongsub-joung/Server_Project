#include "FileStruct.h"
#include "ServerCapacity.h"

//UserMode.cpp 하위 File에 관한 클래스
class File
{
public:

	FileInfo info;
	
	void UploadFile(string title, double volum);//파일 업로드
	void DownroadFile(string input);			//파일 다운로드
	void DeleteFile(string input_name);			//파일 삭제

private:

};


void File::UploadFile(string title, double volum)
{
	//서버 용량을 받아옴.
	double capacity{ 1 };
	double available_capacity = capacity - volum;

	if (available_capacity > 0)
	{
		info.UploadFile(title, volum);
	}
	else
	{
		cout << "용량이 커서 업로드 불가능합니다." << endl;
	}
}



void File::DownroadFile(string input)
{
	info.ShowFileList();

	cout << "------------------------" << endl;
	cout << "파일 명을 입력해주세요" << endl;
	cin >> input;
	info.CheckDownloadFile(input);
}



void File::DeleteFile(string input_name)
{
	info.ShowFileList();

	cout << "------------------------" << endl;
	cout << "파일 명을 입력해주세요" << endl;
	cin >> input_name;
	info.DeleteFile(input_name);
}