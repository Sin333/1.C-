// FirstApp for C++.cpp: определ€ет точку входа дл€ консольного приложени€.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	setlocale(LC_CTYPE, "rus"); //¬кл.  ириллицы
	cout << "¬ведите число: ";
	cin >> n;
	int f = 1;
	for (int i = 2; i <= n; i++)
	{
		f *= i;
		
	}
	cout << "f= " << f<<endl;
	system("pause");
	return 0;
}