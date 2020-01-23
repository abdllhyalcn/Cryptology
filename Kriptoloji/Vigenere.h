#pragma once
#include <string>
#include <iostream>
#include "Characters.h"

using namespace std;

/*Summary: 
		Methods:
			Encryption: Arranges key size by calling generateKey Method then finds ecnrypted chars
			by Text and Key adding and modulo 29.
			Decryption: Arranges key size by calling generateKey Method then finds decrypted chars
			by Text and Key subtract and adding 29 then modulo 29.
			generateKey: Expands key for the message size.*/
class Vigenere : public Characters
{
public:
	void Encryption(string& str, string& key);

	void Decryption(string& str, string& key);

private:
	void generateKey(string& str, string& key);

};

