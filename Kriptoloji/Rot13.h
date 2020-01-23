#pragma once
#include "Characters.h"

/**	Summary:
			For Turkish Character this method is arranged according to 14 division. 
			Accroding to that, 'l' letter which is in the middle of the Turkish alphabet doesnt become changed.
*/
class Rot13:public Characters
{
public:

	void Encryption(char* mesaj);

	void Decryption(char* mesaj);

};

