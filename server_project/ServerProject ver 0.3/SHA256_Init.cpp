#include "KISA_SHA256.h"
#include "Default_include.h"

class SHA256_Init 
{
public:
	SHA256_Init(){}
	void HashUserInfo(BYTE plain[32]);
	vector<BYTE> hased;
};

typedef unsigned char BYTE;
typedef unsigned int UINT;

void SHA256_Init::HashUserInfo(BYTE plain[32])
{
	FILE* fp;
	BYTE encrypt[32];
	UINT plain_leng = 0;
	
	memset(plain, 0x00, sizeof(plain));
	memset(encrypt, 0x00, sizeof(encrypt));

	fp= fopen("SHA-256 Encrypted.txt", "\/");

	cout << "��: " << endl;
	cin >> plain;
	plain_leng = strlen((char*)plain);

	SHA256_Encrpyt(plain, plain_leng, encrypt);

	cout << "�ؽ�ȭ:" << endl;
	for (int i = 0; i < 32; i++)
	{
		auto hash = encrypt[i];
		hased.push_back(hash);
	}
}