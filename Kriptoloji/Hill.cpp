#include "Hill.h"

void Hill::Encryption(string& mesaj, string& key)
{
	int keyMatrix[3][3];

	getKeyMatrix(key, keyMatrix);

	int mesajVector[3][1];

	getMesajVector(mesaj, mesajVector);

	doMatrixCalc(mesaj, keyMatrix, mesajVector);

}

void Hill::Decryption(string& mesaj, string& key)
{
	int keyMatrix[3][3];

	getKeyMatrix(key, keyMatrix);

	int mesajVector[3][1];

	getMesajVector(mesaj, mesajVector);

	int inverseKeyMatrix[3][3];

	MatrixInverse mi;

	mi.inverse(keyMatrix, inverseKeyMatrix);
	
	//display(inverseKeyMatrix);

	doMatrixCalc(mesaj, inverseKeyMatrix, mesajVector);



}

void Hill::getKeyMatrix(string& key, int keyMatrix[][3])
{
	int k = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			keyMatrix[i][j] = findIndexofTurkish(key[k]);
			k++;
		}
	}
}

void Hill::doMatrixCalc(string& mesaj, int keyMatrix[][3], int mesajVector[][1])
{
	string temp;
	int cipherMatrix[3][1];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cipherMatrix[i][j] = 0;

			for (int x = 0; x < 3; x++)
			{
				cipherMatrix[i][j] +=
					keyMatrix[i][x] * mesajVector[x][j];
			}

			cipherMatrix[i][j] = cipherMatrix[i][j] % 29;
			temp.push_back(UpperTurkish[cipherMatrix[i][j]]);
		}
	}
	mesaj = temp;
}

void Hill::doMatrixCalc(string& mesaj, float keyMatrix[][3], int mesajVector[][1])
{
	string temp;
	int cipherMatrix[3][1];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cipherMatrix[i][j] = 0;

			for (int x = 0; x < 3; x++)
			{
				cipherMatrix[i][j] +=
					keyMatrix[i][x] * mesajVector[x][j];
			}

			cipherMatrix[i][j] = cipherMatrix[i][j] % 29;
			temp.push_back(UpperTurkish[cipherMatrix[i][j]]);
		}
	}
	mesaj = temp;
}

void Hill::getMesajVector(string& mesaj,int mesajVector[][1])
{
	for (int i = 0; i < 3; i++)
		mesajVector[i][0] = findIndexofTurkish(mesaj[i]);
}

void Hill::inverseKeyMatrix(int keyMatrix[][3])
{
	int inverseKeyMatrix[3][3];
	int i, j, k;
	float p, q;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			if (i == j)
				inverseKeyMatrix[i][j] = 1;
			else
				inverseKeyMatrix[i][j] = 0;
		}
	for (k = 0; k < 3; k++) {
		for (i = 0; i < 3; i++) {
			p = keyMatrix[i][k];
			q = keyMatrix[k][k];
			for (j = 0; j < 3; j++) {
				if (i != k) {
					keyMatrix[i][j] = keyMatrix[i][j] * q - p * keyMatrix[k][j];
					inverseKeyMatrix[i][j] = inverseKeyMatrix[i][j] * q - p * inverseKeyMatrix[k][j];
				}
			}
		}
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			inverseKeyMatrix[i][j] = inverseKeyMatrix[i][j] / keyMatrix[i][i];
	cout << "\n\nInverse Matrix is:\n";
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			cout << inverseKeyMatrix[i][j] << " ";
		cout << "\n";
	}

	
}
