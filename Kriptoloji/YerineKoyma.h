#pragma once
#include "Characters.h"
#include <string>

using namespace std;

/* Özet: S?n?f olu?turulurken yerine koyulacak alfabe küçük harflere kar??l?k gelmektedir. 
	Örnek yerine koyulan alfabe a?a??dad?r ve Program?n Türkçe format?na uygun olacak biçimde kay?t edilmi?tir.*/
class YerineKoyma :
	public Characters
{
private:
	char PTurkish[29] = { 'f','d','e','a','c','h','g','b','ð','ç','v','s','j','l','k','ý','n','r','z','p','ü','i','þ','y','u','o','m','t','ö' };

public:
	void Encryption(string& mesaj);

	void Decryption(string& mesaj);
};

