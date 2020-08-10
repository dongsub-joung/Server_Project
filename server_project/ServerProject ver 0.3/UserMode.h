#pragma once
#include "Default_Include.h"
#include "UserInfo.h"
#include "FileInfo.h"
#include "ServerCapacity.h"

class UserMode
{
public:
	ServerCapacity capacity;

	void init_UserMode();
	void ShowServerCapacity();

private:
	UserInfo* new_user = newUser;
	void Login(UserInfo *new_user);
	void FileMenu();
	void FileDownload();
	void FileUpload();
	void FileDelete();
};