#pragma once
#include "Characters.h"
#include <iostream>
class Sezar:public Characters
{
public:
	void Encryption(char* mesaj, int key);

	void Decryption(char* mesaj, int key);
};

