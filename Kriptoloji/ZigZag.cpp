#include "ZigZag.h"

void ZigZag::Encryption(string& mesaj, const int key)
{
	string* satir = new string[key];
	int liner = 0;
	int positioner = +1;
	for (int i = 0; i < mesaj.length(); i++) {
		if (liner == key-1) {
			positioner=-1;
		}
		else if (liner == 0) {
			positioner=+1;
		}
		(*(satir+liner)).push_back(mesaj.at(i));
		liner += positioner;
	}

	string temp;
	for (int i = 0; i < key; i++) {
		temp.append(*(satir+i));
	}
	mesaj = temp;
}

void ZigZag::Decryption(string& mesaj,const int key)
{
	int msgLen = mesaj.length(), i, j, k = -1, row = 0, col = 0, m = 0;
	
	char** railMatrix = new char* [key];
	for (int i = 0; i < key; i++)
		railMatrix[i] = new char[mesaj.length()];

	for (i = 0; i < key; ++i)
		for (j = 0; j < msgLen; ++j)
			railMatrix[i][j] = '\n';

	for (i = 0; i < msgLen; ++i) {
		railMatrix[row][col++] = '*';

		if (row == 0 || row == key - 1)
			k = k * (-1);

		row = row + k;
	}

	for (i = 0; i < key; ++i)
		for (j = 0; j < msgLen; ++j)
			if (railMatrix[i][j] == '*')
				railMatrix[i][j] = mesaj[m++];

	row = col = 0;
	k = -1;

	string temp;
	for (i = 0; i < msgLen; ++i) {
		temp.push_back(railMatrix[row][col++]);

		if (row == 0 || row == key - 1)
			k = k * (-1);

		row = row + k;
	}
	mesaj = temp;
	
}
