
#include <tr1/unordered_set>
#include <stddef.h>
#include "linkedlists.h"

using namespace std;
using namespace std::tr1;

//2.1 write code to remove duplicates from an unsorted linked list

void removeDup(Node<int>* list)
{
	if (!list) return;

	unordered_set<int> set;

	Node<int> *ptr = list;
	set.insert(ptr->data);

	while ( ptr->next )
	{
		if (set.find(ptr->next->data) == set.end() )
		{
			set.insert(ptr->next->data);
		}
		else {//remove ptr->next
			Node<int> *tmpPtr = ptr->next;
			ptr->next = ptr->next->next;
			delete tmpPtr;
		}

		ptr = ptr->next;
	}
}

//no buffer allowed
void removeDup2(Node<int> *list)
{
	if (!list) return;

	Node<int>* ptr = list;
	Node<int>* rPtr = list;

	while (ptr)
	{
		while (rPtr->next)
		{
			if ( *ptr == *rPtr->next )
			{ //remove rPtr
				Node<int>* tmpPtr = rPtr->next;
				rPtr->next = rPtr->next->next;
				delete tmpPtr;
			}
			else
				rPtr = rPtr->next;
		}
		ptr = ptr->next;
	}
}

//2.1 kth to last element in book
Node<int>* nthToLast(Node<int>* head, int k, int& i)
{
	if (head == NULL){
		return NULL;
	}

	Node<int> *nd = nthToLast(head->next, k, i);
	i = i+1;
	if (i == k)
		return head;
	return nd;
}
