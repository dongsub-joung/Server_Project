#pragma once
#include "Default_Include.h"

struct FileInfo
{
public:
	void ShowFileList();							//���� ��� ���
	void CheckDownloadFile(string title);			//�ٿ�ε�
	void UploadFile(string title, double volume);	//���ε�
	void DeleteFile(string title);					//���� ����
	void SumFileVolume();							//���� �뷮�� ������ ���

	double m_sum_files;								//���� �뷮�� ����

private:
	string m_name;
	double m_volume;
	map<string, double> m_fileID;					//���� �̸�+�뷮
	
};
