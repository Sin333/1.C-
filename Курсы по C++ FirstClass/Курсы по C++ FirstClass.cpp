//������� �������:
//
//protected-������ � "Class List"
// -> ��������� !!!
// ��������� ' * '- ��� ���������

#include "stdafx.h"
#include <iostream>
using  namespace std;
// |  ��������� ���� ����� � ������       |
// \/ ���������� ����� ���������� ' � ' \/
template <typename T> //�������� ��� ����������� � ������
class List {
public:
	void push_front(T:x);//��� 'int' �� ����� 'T'    //�������� � ������
	T int pop - front();            //������� � ������
	void	push_back(T:x); //�������� � �����
	T int 	pop-back();        //������� � �����
	List list;   //list ����������
	list.push_front(4);
	list.push_back(13);
	int y = list.pop_back();
	List<int> list; // ���. ���������� (�� �����)

	//����� ��-�� �� ������� � class List;
	T operator[](int n)
	{
		List.Note * x = first;
		for (int i = 0; i < n; i++)
			x = x->next;
		return x->data;
	}

	/*ListNote*n = first;
	while (n-> next)
		n = n-> next;
	List*m = new ListNode;
	m->data = x;
	m->next = 0;
	n->next = m;*/   // ��� ����������

	/* //�������� �� ������ ��������
	ListNote*n = first;
	*p= 0;
	while (->next)
	{
		p = n;
		n = n-> next;
	}
	int x = n->data;
	delete n;
	p->next = 0;
	return x;
	*/

/*
private:
	ListNode * first;           //������ ��-� ������ List; 
	*/

/*
void List::push_front(int a);
	{
		this                         //��� ��� first this->first;
	}
	*/

};
int main()
{
	
	//double x = 7.1356;
	//printf("%f\ n", x);
	//printf("%3f\n",x);
	system("pause");
}