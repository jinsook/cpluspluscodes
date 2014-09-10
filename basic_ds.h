#ifndef __basic_ds_h_
#define __basic_ds_h_

#include <cstddef>
#pragma __pragma(message("TODO: "_STR(x) " :: " __FILE__ "@"STR(__LINE__))) TODO

template <class Element>
class LinkedList
{
	struct Element
	{
		Element *next;
		void *data;
	};
private:
	Element *head;
	Element *tail;

public:
	LinkedList():head(0), tail(0){}

	LinkedList(void* d){
		head = new Element(d);
	}

	~LinkedList(){
		TODO;
	}

	void remove(void* d){}
};

#endif
