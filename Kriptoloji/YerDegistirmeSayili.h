#pragma once
#include <string>
#include <iostream>

using namespace std;
/** �zet: S?n?f string tipinde ald??? mesaj? uygun bi�imde �evirmektedir. 
	Matriksin bo? alanlar? bo?luk ile doldurmaktad?r.*/
class YerDegistirmeSayili
{
public:
	void Encryption(string& mesaj, string& key);

	void Decryption(string& mesaj, string& key);
};

