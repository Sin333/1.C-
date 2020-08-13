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
	int a, b, c, d;
	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	cout << "Введите c" << endl;
	cin >> c;
	d = b*b - 4 * a*c;
	if (d < 0)
		cout << "Корней нет!" << endl;;
	if (d == 0)
	{
		int x = (-b + sqrt(d)) / 2;
		cout << x << endl;
	}
	if(d>0) 
	{
		int x1 = (-b + sqrt(d)) / 2;
		int x2 = (-b - sqrt(d)) / 2;
		cout << "\n" << x1 << "\n" << x2 << endl;
	}
	cout << "Время: " << clock() / 1000.0 << " секунд" << endl;
	system("pause");
}

