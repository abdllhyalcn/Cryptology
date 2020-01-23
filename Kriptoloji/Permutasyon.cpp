#include "Permutasyon.h"

void Permutasyon::Encryption(string& mesaj, string& key)
{
	
	int c = 0;
	string temp;
	while (c<mesaj.length()) {
		
		for (int i = 0; i < key.length(); i++) {
			if (c + key[i] - '0' - 1<mesaj.length()) {
				temp.push_back(mesaj.at(c + key[i] - '0' - 1));
			}
			else {
				temp.push_back('a');
			}
			
		}
		c=c+key.length();
	}
	mesaj = temp;
}

void Permutasyon::Decryption(string& mesaj, string& key)
{
	int c = 0;
	string temp;
	while (c < mesaj.length()) {

		for (int i = 1; i <= key.length(); i++) {
			for (int k = 0; k < key.length(); k++) {
				if ((key[k] - '0') == i) {
					temp.push_back(mesaj.at(c + k));
					break;
				}
			}

		}
		c = c + key.length();
	}
	mesaj = temp;
}
