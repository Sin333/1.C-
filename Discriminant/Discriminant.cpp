// Arifmet Progres.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "������� a" << endl;
	cin >> a;
	cout << "������� b" << endl;
	cin >> b;
	cout << "������� c" << endl;
	cin >> c;
	d = b*b - 4 * a*c;
	if (d < 0)
		cout << "������ ���!" << endl;;
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
	cout << "�����: " << clock() / 1000.0 << " ������" << endl;
	system("pause");
}

