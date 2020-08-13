#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i, j, k = 0, p = 0, n;
	cin >> n;
	cout << endl;
	int **a = new int *[n];
	for (i = 0; i < n; i++)
		a[i] = new int[n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = rand() % 5;
			cout << a[i][j] << "\t";
			if (i == j)
				k += a[i][j];
		}
		cout << endl;
	}
	cout << "diag" << k << endl;
	k = 0;
	i = 0;
	j = 2;
	while (i != 3)
	{
		p += a[i][j];
		i++;
		j--;
	}
		cout << endl;
	cout <<"Obrat diag"<< p;
	system("pause");
}