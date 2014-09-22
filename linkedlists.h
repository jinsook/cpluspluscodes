#ifndef __LINKEDLISTS_H__
#define __LINKEDLISTS_H__
class Node
{
public:
	int data;
	Node *next;

	Node(int i):data(i),next(0){}

	bool operator==(const Node& node)
	{
		if (data == node.data )
			return true;
		return false;
	}
};
Node* nthToLast(Node* head, int k, int& i);
#endif
