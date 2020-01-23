#pragma once
#include <string>

using namespace std;
/*Summary:
	Methods:
		Encryption:It uses string pointer that points to an array. Encrypt the message in a loop according to line key.
		Decryption:Defines some variables which are neccessary and uses 2D pointer array for decryption.*/
class ZigZag
{
public:
	void Encryption(string& mesaj,const int key);

	void Decryption(string& mesaj,const int key);
};

