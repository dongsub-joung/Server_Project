#pragma once
#include "Default_Include.h"

struct FileInfo
{
public:
	void ShowFileList();							//파일 목록 출력
	void CheckDownloadFile(string title);			//다운로드
	void UploadFile(string title, double volume);	//업로드
	void DeleteFile(string title);					//파일 삭제
	void SumFileVolume();							//파일 용량의 총합을 계산

	double m_sum_files;								//파일 용량의 총합

private:
	string m_name;
	double m_volume;
	map<string, double> m_fileID;					//파일 이름+용량
	
};
