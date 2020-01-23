#pragma once
#include "Characters.h"
#include <string>
#include <iostream>
#include "MatrixInverse.h"

template<class T>
void display(T A[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}

using namespace std;

/*Summary:
		Encyption:Calls getKeyMatrix, getMesajVector then doMatrixCalc for multipying them.
		Decryption: Calls getKeyMatrix, getMesajVector and inverse keyMAatrix then calls doMatrixCalc for multiplying them.
		getKeyMatrix and getMesajVector: takes string and fill them into 3*3 or 3*1 arrays according to index of chars.
		doMatrixCalc:Multiply keyMatrix and mesajVector and fill the result into the string message.*/
class Hill :
	public Characters
{
public:

	void Encryption(string& mesaj, string& key);

	void Decryption(string& mesaj, string& key);

	void getKeyMatrix(string& key, int keyMatrix[][3]);

	void doMatrixCalc(string& mesaj, int keyMatrix[][3], int mesajVector[][1]);

	void doMatrixCalc(string& mesaj, float keyMatrix[][3], int mesajVector[][1]);

	void getMesajVector(string& mesaj, int mesajVector[][1]);

	void inverseKeyMatrix(int keyMatrix[][3]);


};

