// TESTILMIR.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;

struct list_node {
	int value;
	list_node *next;//указатель на след элемент
	list_node();
};
list_node::list_node()
{
	next = 0;
};
struct list
{
	list_node *begin;
	list_node *end;

	list();
	void push_front(int val);
	void push_back(int val);
	void pop_front();
	void pop_back();


};
list::list()
{
	this->begin = 0;
	this->end = 0;
}
void list::push_back(int val)//добаляет символ с конца
{
	list_node*cur = new list_node;
	cur->value = val;
	if (this->begin == 0)
	{
		this->begin = cur;
		this->end = cur;

	}
	else
	{
		this->end->next = cur;
		this->end = cur;
	}
}

void list::push_front(int val)//добаляет символ с начала
{
	list_node*cur = new list_node;
	cur->value = val;
	if (this->begin == 0)
	{
		this->begin = cur;
		this->end = cur;

	}
	else
	{
		cur->next = begin;
		this->begin = cur;
	}
}
void list::pop_front()//удаление с начала
{
	if (begin == end) {
		begin = 0;
		end = 0;
	}
	else {
		list_node *new_begin = begin->next;
		delete begin;
		begin = new_begin;
	}
}
void list::pop_back() //удаление с конца
{
	if (begin == end) {
		begin = 0;
		end = 0;
	}
	else {
		list_node *new_end = begin;
		while (new_end->next != end)
			new_end = new_end->next;
		delete end;
		end = new_end;
	}
}

int main()
{

	list a;
	int n;
	cin >> n;
	string k;

	for (int i = 0; i<n; i++)
	{
		int pb, pf;
		cin >> k;
		if (k == string("PUSH_BACK"))
		{
			cin >> pb;
			a.push_back(pb);
		}
		if (k == string("PUSH_FRONT"))
		{
			cin >> pf;
			a.push_front(pf);
		}
		if (k == string("POP_FRONT"))
		{

			a.pop_front();
		}
		if (k == string("POP_BACK"))
		{

			a.pop_back();
		}
		if (k == string("PRINT"))
		{
			for (list_node *i = a.begin; i != 0; i = i->next) {

				cout << i->value << ' ';
			}
		}

	}
	system("pause");
}