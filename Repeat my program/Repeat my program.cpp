// Repeat my program.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string p="Yes";
	while (p == "Yes")
	{
		cout << "Work!" << endl;
		cout << "repeat my program?" << "\n" << "(Yes/No)" << endl;
		cin >> p;
	}
}