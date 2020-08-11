#pragma once
#include "Default_Include.h"
#include "UserInfo.h"
#include "FileClass.h"
#include "ServerCapacity.h"

class UserMode
{
public:
	ServerCapacity capacity;
	File *file_class = new File();

	void init_UserMode();
	void ShowServerCapacity();
	CapacityInfo info = CapacityInfo();

	void FileDownload();
	void FileUpload();
	void FileDelete();

private:
	UserInfo* new_user = newUser;
	void Login(UserInfo *new_user);
	void FileMenu();
};