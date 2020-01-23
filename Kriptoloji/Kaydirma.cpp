#include "Kaydirma.h"

void Kaydirma::Encryption(char* mesaj, int key, bool to)
{
	if (to) {
		toRight(mesaj, key);
	}
	else {
		toLeft(mesaj, key);
	}
}

void Kaydirma::Decryption(char* mesaj, int key, bool to)
{
	if (to) {
		toLeft(mesaj, key);
	}
	else {
		toRight(mesaj, key);
	}
}

void Kaydirma::toRight(char* mesaj, int key)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 29; i++) {
			if (Turkish[i] == mesaj[c]) {
				i = (i + key) % 29;
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}

void Kaydirma::toLeft(char* mesaj, int key)
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
