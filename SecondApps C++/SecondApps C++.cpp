// SecondApps C++.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int i;
	cin >> i;
	if (i > 17)
		cout << "�� ��� ��������, ����: " << i << " ���." << endl;
	else
		cout << "�� ��� ������" << endl;
	system("pause");
    //return 0;
}

