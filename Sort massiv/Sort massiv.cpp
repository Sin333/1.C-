#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int i,j,n;
	cin >> n;
	int *a = new int[n]; //massive
	int *z = new int[n];
	for ( i = 0; i < n; i++)
	{
		a[i] = rand() % 19;
		cout << a[i] << "\t";
	}
	cout << endl;
	cout << "От большего к меньшему" << endl;
	for ( i = 0; i < n; i++)
	{
		for ( j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				/////// 5		4
				//swap(a[i], a[j]);
				/////// 4		5

				int testvalue = a[i];
				a[i] = a[j];
				a[j] = testvalue;

			}
		}
		cout<< a[i] << "\t";
	}
		cout << endl;
		cout << "От меньшего к большому" << endl;
		for (i = n-1; i >= 0; i--)
		{
			cout << a[i] << "\t";
		}
	system("pause");
}

