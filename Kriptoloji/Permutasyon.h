#pragma once
#include "Characters.h"
#include <string>
#include <iostream>

using namespace std;
/** Özet: Uygun biçimde key girildi?i takdirde s?n?f fonksiyonlar? mesaj? bloklara ay?r?p ?ifrelemektedir. 
	Örnek Mesaj: babadede Key:2413 Ç?kt?:aabbeedd*/

class Permutasyon :
	public Characters
{
public:
	void Encryption(string& mesaj, string& key);

	void Decryption(string& mesaj, string& key);
};

