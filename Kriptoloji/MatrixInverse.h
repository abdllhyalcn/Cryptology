#pragma once
#include <iostream>
#include <windows.h>

using namespace std;
#define N 3 
class MatrixInverse
{
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
public:

	int determinant(int A[N][N], int n);

	void getCofactor(int A[N][N], int temp[N][N], int p, int q, int n);

	void adjoint(int A[N][N], int adj[N][N]);

	bool inverse(int A[N][N], int inverse[N][N]);

	

};

