#pragma once
#include "FileInfo.h"
#include "ServerCapacity.h"

//File�� ���࿡ ���� Ŭ����
class File
{
public:
	~File() {};
	FileInfo* info = new FileInfo;

	void UploadFile(string title, double volum);//���� ���ε�
	void DownroadFile(string input);			//���� �ٿ�ε�
	void DeleteFile(string input_name);			//���� ����
};
