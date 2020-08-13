// Matrix C++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

	int main()
	{
		setlocale(LC_CTYPE, "rus");
		int i, j, n = 4;
		int a[4][4];
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				a[i][j] = rand() % 100;
				cout << a[i][j]<<"   ";
			}
			cout << endl;
		}
		system("pause");
		return 0;
	}