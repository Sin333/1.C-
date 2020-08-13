//Главные вопросы:
//
//protected-Защита в "Class List"
// -> Стрелочка !!!
// звездочка ' * '- Это указатель

#include "stdafx.h"
#include <iostream>
using  namespace std;
// |  Превратим этот класс в шаблон       |
// \/ Добавление путем переменной ' Т ' \/
template <typename T> //Операция для превращения в шаблон
class List {
public:
	void push_front(T:x);//или 'int' за место 'T'    //добавить в начало
	T int pop - front();            //удалить с начала
	void	push_back(T:x); //добавить в конец
	T int 	pop-back();        //удалить с конца
	List list;   //list переменная
	list.push_front(4);
	list.push_back(13);
	int y = list.pop_back();
	List<int> list; // Доп. переменная (не нужна)

	//Вывод эл-та из массива в class List;
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
	n->next = m;*/   // Это реализация

	/* //наверное он должен работать
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
	ListNode * first;           //Первый эл-т класса List; 
	*/

/*
void List::push_front(int a);
	{
		this                         //Это как first this->first;
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