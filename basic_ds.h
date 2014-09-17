#ifndef __basic_ds_h_
#define __basic_ds_h_

#include <cstddef>
#define TODO(x) __pragma(message("TODO: "_STR(x) " :: " __FILE__ "@"STR(__LINE__)))

template <class Data>
class LinkedList
{
	struct Element
	{
		Element *next;
		Data *data;
	};
private:
	Element *head;

public:
	LinkedList():head(0){}

	LinkedList(Data *d){
		head = new Element(d);
	}

	~LinkedList(){
	}

	void remove(void* d){}
};

#endif
