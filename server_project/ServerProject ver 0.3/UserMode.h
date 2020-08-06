#pragma once
#include "Default_Include.h"
#include "FileInfo.cpp"
#include "ServerCapacity.cpp"


class UserMode
{
public:
	Login login;
	ServerCapacity capacity;

	void init_UserMode();
	void ShowServerCapacity();

	void FileMenu();
	void FileDownload();
	void FileUpload();
	void FileDelete();
private:

};