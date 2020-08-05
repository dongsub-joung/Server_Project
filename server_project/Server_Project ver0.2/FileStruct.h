#pragma once
#include "Default_Include.h"

struct FileInfo
{
public:
	void ShowFileList();							//파일 목록 출력
	void CheckDownloadFile(string title);			//다운로드
	void UploadFile(string title, double volume);	//업로드
	void DeleteFile(string title);					//파일 삭제

	void FileVolume();								//파일 용량의 총합을 계산
private:
	string m_name;
	double m_volume;
	map<string, double> m_fileID;
};

void FileInfo::FileVolume()
{

}


void FileInfo::ShowFileList()
{
	map<string, double>::iterator iter;

	int index{ 1 };
	for (iter = m_fileID.begin(); iter != m_fileID.end(); iter++)
	{
		std::cout << "index" << index;
		cout << iter->second << endl;
		index++;
	}
}


void FileInfo::CheckDownloadFile(string title)
{
	int yes_or_no = m_fileID.count(title);

	if (yes_or_no == 1)
	{
		std::cout << "해당 파일은 다운로드가 가능합니다." << endl;
	}
	else
	{
		std::cout << "해당 파일은 목록에 존재하지 않습니다." << endl;
	}
}

void FileInfo::UploadFile(string title, double volume)
{
	m_fileID.insert(make_pair(title, volume));
}

void FileInfo::DeleteFile(string title)
{
	m_fileID.erase(title);
}