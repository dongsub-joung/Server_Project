/**
*@brief			FileInfo 
*@details		Accessing struct `FileInfo` and Writing, Reading, Deleting data
*@author		Joung Dong Sub
*@version		0.0.3
*/

#include "FileInfo.h"

///map의 value를 전부 더해서 파일 용량 구하기
void FileInfo::SumFileVolume()
{
	double sum{ 0 };
	map<string, double>::iterator iter;

	for (iter = this->m_fileID.begin(); iter != this->m_fileID.end(); iter++)
	{
		auto key = iter->second;
		sum += key;
	}

	this->m_sum_files = sum;
}

/// map의 key 값을 이용하여 파일 제목 출력
void FileInfo::ShowFileList()
{
	map<string, double>::iterator iter;

	int index{ 1 };
	for (iter = this->m_fileID.begin(); iter != this->m_fileID.end(); iter++)
	{
		cout << "index: " << index;
		cout << iter->first << endl;
		index++;
	}
}

///다운로드) 파일여부 확인
void FileInfo::CheckDownloadFile(string title)
{
	int yes_or_no = this->m_fileID.count(title);

	if (yes_or_no == 1)
	{
		std::cout << "해당 파일은 다운로드가 가능합니다." << endl;
	}
	else
	{
		std::cout << "해당 파일은 목록에 존재하지 않습니다." << endl;
	}
}

///업로드) Key: 파일 제목, Value: 용량 입력
void FileInfo::UploadFile(string title, double volume)
{
	this->m_fileID.insert(make_pair(title, volume));
}

///삭제) Key값을 입력받아 해당 파일 삭제
void FileInfo::DeleteFile(string title)
{
	this->m_fileID.erase(title);
}