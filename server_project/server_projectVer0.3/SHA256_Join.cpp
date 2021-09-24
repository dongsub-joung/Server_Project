#include "SHA256_Join.h"

typedef unsigned char BYTE;
typedef unsigned int UINT;

void SHA256_Join::HashUserInfo()
{
	//FILE* fp;
	BYTE encrypt[32];
	BYTE plain[32];
	UINT plain_leng = 0;

	memset(plain, 0x00, sizeof(plain));
	memset(encrypt, 0x00, sizeof(encrypt));

	//fp = fopen("SHA-256 Encrypted.txt", "\/");

	cout << "Plaining: \n"; cin >> plain;
	plain_leng = strlen((char*)plain);

	SHA256_Encrpyt(plain, plain_leng, encrypt);

	cout << "Encrypting: \n" << endl;
	for (int i = 0; i < 32; i++)
	{
		auto hash = encrypt[i];
		hashed.push_back(hash);
	}

	sendHashCode(hashed);
}

vector sendHashCode(vector<BYTE> hashed)
{
	return hashed;
}