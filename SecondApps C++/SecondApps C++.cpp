// SecondApps C++.cpp: определяет точку входа для консольного приложения.
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
		cout << "Ты уже взрослый, тебе: " << i << " лет." << endl;
	else
		cout << "Ты еще ребёнок" << endl;
	system("pause");
    //return 0;
}

