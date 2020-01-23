#pragma once
#include <string>
#include <iostream>

using namespace std;
/** Özet: S?n?f string tipinde ald??? mesaj? uygun biçimde çevirmektedir. 
	Matriksin bo? alanlar? bo?luk ile doldurmaktad?r.*/
class YerDegistirmeSayili
{
public:
	void Encryption(string& mesaj, string& key);

	void Decryption(string& mesaj, string& key);
};

