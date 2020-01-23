#include "YerDegistirmeSayili.h"

void YerDegistirmeSayili::Encryption(string& mesaj, string& key)
{
	string temp;
	
	for (int i = 1; i <= key.length(); i++) {
		int t = 0;
		while (i  != key[t] - '0') {
			t++;
		}
		
		for (int k = 0; k < (float)mesaj.length() / key.length();k++) {
			
			if (t + k * (mesaj.length() / key.length()) < mesaj.length()) {
				temp.push_back(mesaj[t + k * (mesaj.length() / key.length())]);
			}
			else {
				temp.push_back(' ');
			}
			
		}
	}
	mesaj = temp;
}

void YerDegistirmeSayili::Decryption(string& mesaj, string& key)
{
	
	string temp;

	for (int k = 0; k < (float)mesaj.length() / key.length(); k++) {
		
		for (int i = 1; i <= key.length(); i++) {
			int t = 0;
			while (i != key[t] - '0') {
				t++;
			}
			
			if (k + t * (mesaj.length() / key.length()) < mesaj.length()) {
				temp.push_back(mesaj[k+t* (mesaj.length() / key.length())]);
			}

		}

	}
	mesaj = temp;
}
