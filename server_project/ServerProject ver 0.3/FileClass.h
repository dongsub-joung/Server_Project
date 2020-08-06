#pragma once
#include "FileInfo.h"
#include "ServerCapacity.h"

//File의 실행에 관한 클래스
class File
{
public:
	~File() {};
	FileInfo* info = new FileInfo;

	void UploadFile(string title, double volum);//파일 업로드
	void DownroadFile(string input);			//파일 다운로드
	void DeleteFile(string input_name);			//파일 삭제
};
