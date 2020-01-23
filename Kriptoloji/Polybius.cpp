#include "Polybius.h"

void Polybius::Encryption(string& str)
{
	string temp;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'ç'|| str[i] == 'Ç')
			str[i] = 'c';
		else if (str[i] == 'ð'|| str[i] == 'Ð')
			str[i] = 'g';
		else if (str[i] == 'ý'|| str[i] == 'Ý')
			str[i] = 'i';
		else if (str[i] == 'ü'|| str[i] == 'Ü')
			str[i] = 'u';
	}
	int i = 0;
	while (i<str.length()) {
		for (int row = 0; row < 5; row++) {
			for (int col = 0; col < 5; col++) {
				if (str[i] == PArray[row][col]|| str[i] == PArray[row][col]) {
					temp.push_back(row + '0'); temp.push_back(col + '0');
					break;
				}
				else if (str[i] == UArray[row][col]) {
					temp.push_back(row + '0'); temp.push_back(col + '0');
					break;
				}
			}
		}
		i++;
	}

	str = temp;

}

void Polybius::Decryption(string& str)
{
	string temp;
	for (int i = 0; i < str.length(); i+=2) {
		temp.push_back(PArray[str[i] - '0'][str[i + 1] - '0']);
	}
	str = temp;

}
