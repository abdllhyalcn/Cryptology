#include "Affine.h"

void Affine::Encryption(char* mesaj, int key1, int key2)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 30; i++) {
			if (Turkish[i] == mesaj[c]) {
				i = (key1*i+key2) %30;
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}

void Affine::Decryption(char* mesaj, int key1, int key2)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 30; i++) {
			if (Turkish[i] == mesaj[c]) {
				i = ((i-key2)/key1) %30;
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}
