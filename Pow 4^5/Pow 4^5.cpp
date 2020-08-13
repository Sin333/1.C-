#include "stdafx.h"
#include <iostream>
#include <ctime>
#include<cmath>
using namespace std;
int main()
{
	int b = 4, c = 5;
	double a = pow(b, c); //Возводит число 4^5 
	cout << a << endl;
	cout << "Time: " << clock() / 1000.0 << " second" << endl;
	system("pause");
}