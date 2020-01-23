#pragma once
#include "Characters.h"
/**	Summary:
			According to to variable function encrypt and decrypt. If "to" is true that means right shifting.
			Otherwise ıt is left shifting.
*/
class Kaydirma :
	public Characters
{
public:

	void Encryption(char* mesaj, int key, bool to);

	void Decryption(char* mesaj, int key, bool to);

	void toRight(char* mesaj, int key);

	void toLeft(char* mesaj, int key);
};

