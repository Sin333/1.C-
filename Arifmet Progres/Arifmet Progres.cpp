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
	double S = 1, x;
	int n;
	cout << "������� ����� X" << endl;
	cin >> x;
	cout << "������� ������������ �������" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		S *= (1 + pow(x, i));  //S=S*(1+x^i)
	}
	cout << "\n" << S << endl;
	cout << "�����: " << clock() / 1000.0 << " ������" << endl;
	system("pause");
}

