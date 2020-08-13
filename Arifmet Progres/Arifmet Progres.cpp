// Arifmet Progres.cpp: определяет точку входа для консольного приложения.
//S=(1+x)*(1+x^2)*...*(1+x^n)


#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double S = 1, x;
	int n;
	cout << "Введите число X" << endl;
	cin >> x;
	cout << "Введите максимальную степень" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		S *= (1 + pow(x, i));  //S=S*(1+x^i)
	}
	cout << "\n" << S << endl;
	cout << "Время: " << clock() / 1000.0 << " секунд" << endl;
	system("pause");
}

