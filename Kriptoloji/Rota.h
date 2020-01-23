#pragma once
#include <string>

using namespace std;
/*Summary:
	Methods:
		Encryption:Pushes 'X' char for empty spaces. Uses string iterator to point place in string message. Encrypt beginning right-top.
		Decryption:Defines char array pointer size message length. Push characters in message beggining right-top. Read the char array pointer from begin.  */
class Rota
{
public:
	void Encryption(string& mesaj,const int key);

	void Decryption(string& mesaj,const int key);
};

