#include "Rot13.h"

void Rot13::Encryption(char* mesaj)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 29; i++) {
			if (Turkish[i] == mesaj[c]) {
				if (i > 14) {
					i = i - 15;
				}
				else if(i<14) {
					i = i + 15;
				}
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}

void Rot13::Decryption(char* mesaj)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 29; i++) {
			if (Turkish[i] == mesaj[c]) {
				if (i < 14) {
					i = i + 15;
				}
				else if (i > 14) {
					i = i - 15;
				}
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}
