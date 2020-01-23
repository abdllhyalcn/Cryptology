#include "YerineKoyma.h"

void YerineKoyma::Encryption(string& mesaj)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 29; i++) {
			if (Turkish[i] == mesaj[c]) {
				mesaj[c] = PTurkish[i];
				break;
			}
		}
		c++;
	}
}

void YerineKoyma::Decryption(string& mesaj)
{
	int c = 0;

	while (mesaj[c] != '\0') {
		for (int i = 0; i < 29; i++) {
			if (PTurkish[i] == mesaj[c]) {
				mesaj[c] = Turkish[i];
				break;
			}
		}
		c++;
	}
}
