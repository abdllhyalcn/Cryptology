#pragma once
#include "Characters.h"
#include <string>

using namespace std;

/* �zet: S?n?f olu?turulurken yerine koyulacak alfabe k���k harflere kar??l?k gelmektedir. 
	�rnek yerine koyulan alfabe a?a??dad?r ve Program?n T�rk�e format?na uygun olacak bi�imde kay?t edilmi?tir.*/
class YerineKoyma :
	public Characters
{
private:
	char PTurkish[29] = { 'f','d','e','a','c','h','g','b','�','�','v','s','j','l','k','�','n','r','z','p','�','i','�','y','u','o','m','t','�' };

public:
	void Encryption(string& mesaj);

	void Decryption(string& mesaj);
};

