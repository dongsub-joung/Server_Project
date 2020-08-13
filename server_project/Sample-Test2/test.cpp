#include "pch.h"
#include "../ServerProject ver 0.3/SHA256_Join.h"

using namespace std;

SHA256_Join sha256_join = SHA256_Join();
/*
bool castByte(BYTE*& buf, wstring Str)
{
	enum{header =2 };
	short size = Str.size() * 2;
	//short
	buf[0] = size & 0xff;
	buf[1] = (size >> 8) & 0xff;
	memcpy_s(buf + header, size, Str.c_str(), size);
	return 1;
}
*/

//pw가 암호화되었는지 테스트
TEST(TestCaseName, TestName) 
{;
	//string meg = "vD7826481";
	sha256_join.HashUserInfo();

  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}