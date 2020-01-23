#include "Vigenere.h"

void Vigenere::Encryption(string& str, string& key)
{
	string cipher_text;
	generateKey(str, key);

	for (int i = 0; i < str.size(); i++)
	{
	
		int x = (str[i] + key[i]) % 29;

		// convert into alphabets(using Class) 

		//cout << (findIndexofTurkish(str[i])+ findIndexofTurkish(key[i]))%29<<"\n";

		cipher_text.push_back(Turkish[(findIndexofTurkish(str[i]) + findIndexofTurkish(key[i])) % 29]);
	}
	str= cipher_text;

}

void Vigenere::Decryption(string& str, string& key)
{
	string orig_text;
	generateKey(str, key);

	for (int i = 0; i < str.size(); i++)
	{
		// converting in range 0-25 
		int x = (str[i] - key[i] + 26) % 26;

		// convert into alphabets(using Class)
		orig_text.push_back(Turkish[(findIndexofTurkish(str[i]) - findIndexofTurkish(key[i])+29) % 29]);
	}
	str=orig_text;
}

void Vigenere::generateKey(string& str, string& key)
{
	{
		int x = str.size();

		for (int i = 0; ; i++)
		{
			if (x == i)
				i = 0;
			if (key.size() == str.size())
				break;
			key.push_back(key[i]);
		}
		
	}
}
