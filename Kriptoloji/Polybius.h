#pragma once
#include <string>
#include <iostream>

using namespace std;
/*Summary:
		Methods:
			Encryption:	Firstly controls special characters for ç, ğ, ı and ü then writes row and columns where is equal char in table.
			Decryption: Executes decrypted string two by two, finds char in the table according to row and column info.*/
class Polybius
{
private:
	char PArray[5][5] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','v','y','z' };
	char UArray[5][5]= { 'A','B','C','D','E','F','G','H','İ','J','K','L','M','N','O','Ö','P','R','S','Þ','T','U','V','Y','Z' };
public:
	void Encryption(string& str);

	void Decryption(string& str);
};

