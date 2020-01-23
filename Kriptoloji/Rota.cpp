#include "Rota.h"

void Rota::Encryption(string& mesaj,const int key)
{
	string temp;

	while (mesaj.length()%key != 0.0) {
		mesaj.push_back('X');
	}

	std::string::iterator it =begin(mesaj);
	
	bool rowup = false;
	bool first = true;
	int i = (mesaj.length() / key <= key) ? mesaj.length() / key : key;
	
	int sayac = 0;
	while(i!=0){
		rowup = !rowup;
		for (int rower = 0; rower < mesaj.length()/key-sayac; rower++) {
			if (first) {
				it += key - 1;
				first = !first;
			}
			else if (rowup) {
				it += key;
			}
			else { it -= key; }
			temp.push_back(*it);
		}
		for (int columner = 0; columner <key-sayac-1; columner++) {
			if (rowup) {
				it -= 1;
			}
			else { it += 1; }
			temp.push_back(*it);
		}
		i--;
		sayac++;
	}
	mesaj = temp;
}

void Rota::Decryption(string& mesaj, const int key)
{
	char* temp=new char[mesaj.length()];
	char* beginoftemp = temp;
	std::string::iterator it = begin(mesaj);

	bool rowup = false;
	bool first = true;
	int i = (mesaj.length() / key <= key) ? mesaj.length() / key : key;

	int sayac = 0;
	while (i != 0) {
		rowup = !rowup;
		for (int rower = 0; rower < mesaj.length() / key - sayac; rower++) {
			if (first) {
				
				temp += key - 1;
				first = !first;
			}
			else if (rowup) {
				temp += key;
			}
			else { temp -= key; }
			*temp = *it++;
		}
		for (int columner = 0; columner < key - sayac - 1; columner++) {
			if (rowup) {
				temp -= 1;
			}
			else { temp += 1; }
			*temp = *it++;
		}
		i--;
		sayac++;
	}
	
	mesaj = std::string(beginoftemp,mesaj.length());
}
