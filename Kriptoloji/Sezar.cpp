#include "Sezar.h"

void Sezar::Encryption(char* mesaj, int key)
{
	int c = 0;
	
	while (mesaj[c] != '\0') {
		for (int i = 0; i < 29; i++) {
			if (Turkish[i] == mesaj[c]){
				i = (i + key)%29;
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}

void Sezar::Decryption(char* mesaj, int key)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 29; i++) {
			if (Turkish[i] == mesaj[c]) {
				i = i - key;
				if (i < 0) {
					i = i + 29;
				}
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}
