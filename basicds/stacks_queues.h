#ifndef __STACKS_QUEUES_H__
#define __STACKS_QUEUES_H__
#include <exception>
#include "basic_ds.h"

template <class Type>
class MyStack
{
	Node<Type> *top;
public:
	MyStack():top(NULL){}
	void push(Type);
	Type pop();
	bool isEmpty() { return (top == NULL); }
};

template <class Type>
void MyStack<Type>::push(Type data)
{
    Node<Type> *item = new Node<Type>(data);
    item->next = top;
    top = item;
}

template <class Type>
Type MyStack<Type>::pop()
{
	if (top != NULL) {
		Node<Type> *item = top;
		top = item->next;
		Type data = top->data;
		delete item;
		return data;
	}
	throw std::exception("empty stack popping");
}

#endif
