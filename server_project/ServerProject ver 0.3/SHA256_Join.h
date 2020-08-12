#pragma once
#include "KISA_SHA256.h"
#include "Default_include.h"

class SHA256_Join
{
public:
	SHA256_Join() {}
	void HashUserInfo();
	vector<BYTE> hased;
};