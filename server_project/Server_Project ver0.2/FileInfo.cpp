#include "FileStruct.h"

void FileInfo::SumFileVolume()
{
	map<string, double>::iterator iter;
	double sum{ 0 };

	for (iter = m_fileID.begin(); iter != m_fileID.end(); iter++)
	{
		auto key = iter->second;
		sum += key;
	}

	m_sum_files = sum;
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
		std::cout << "�ش� ������ �ٿ�ε尡 �����մϴ�." << endl;
	}
	else
	{
		std::cout << "�ش� ������ ��Ͽ� �������� �ʽ��ϴ�." << endl;
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