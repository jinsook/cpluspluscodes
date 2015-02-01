#ifndef __basic_ds_h_
#define __basic_ds_h_

#include <cstddef>
#define TODO(x) __pragma(message("TODO: "_STR(x) " :: " __FILE__ "@"STR(__LINE__)))

template <class Type>
class Node
{
public:
	Type data;
	Node *next;

	Node(Type i):data(i),next(0){}

	bool operator==(const Node& node)
	{
		if (data == node.data )
			return true;
		return false;
	}
};
#endif
