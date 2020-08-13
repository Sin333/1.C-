#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
void Fructarial(int numb)
{
	int rezult = 1;
	for (int i = 1; i <= numb; i++)
		rezult *= i;
	cout << numb << "!= " << rezult << endl;
}
int main()
{
	string p;
    bool  k=0;
	int numb;
	while(k==0)
	{
		cin >> numb;
	Fructarial(numb);
	cout << "You want to try my program?" << "\n" << "(Y/N)" << endl;
	cin >> p;
	if (p != "Y")
		break;
	}
	cout << "Time: " << clock() / 1000.0 << " second" << endl;
	system("pause");
}