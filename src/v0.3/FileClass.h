#pragma once
#include "FileInfo.h"
#include "ServerCapacity.h"

//File�� ���࿡ ���� Ŭ����
class File
{
public:
	~File() {};
	FileInfo* info = new FileInfo();
	
	void UploadFile(double capacity);//���� ���ε�
	void DownroadFile();			//���� �ٿ�ε�
	void DeleteFile();			//���� ����
};
