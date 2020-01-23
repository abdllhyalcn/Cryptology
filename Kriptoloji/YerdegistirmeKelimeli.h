#pragma once
#include "Characters.h"
#include <string>

using namespace std;
class YerdegistirmeKelimeli :
	public Characters
{
public:
	void Encryption(string& mesaj, string& key);

	void Decryption(string& mesaj, string& key);
};

