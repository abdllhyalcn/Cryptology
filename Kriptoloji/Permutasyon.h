#pragma once
#include "Characters.h"
#include <string>
#include <iostream>

using namespace std;
/** �zet: Uygun bi�imde key girildi?i takdirde s?n?f fonksiyonlar? mesaj? bloklara ay?r?p ?ifrelemektedir. 
	�rnek Mesaj: babadede Key:2413 �?kt?:aabbeedd*/

class Permutasyon :
	public Characters
{
public:
	void Encryption(string& mesaj, string& key);

	void Decryption(string& mesaj, string& key);
};

