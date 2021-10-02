#pragma once
#include "Default_include.h"
#include "KISA_SHA256.h"


class SHA256_Join
{
public:
	vector sendHashCode(vector<BYTE> hashed);

private:
	vector<BYTE> hashed;

	SHA256_Join() {}
	void HashUserInfo();
};