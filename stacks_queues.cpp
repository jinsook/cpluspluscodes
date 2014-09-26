#include "stacks_queues.h"

//3.5 implement a MyQueue class which implements a queue using two stacks
class myQueue
{
	MyStack<int> s1; //bottom is oldest
	MyStack<int> s2; //top is oldest
public:
	void enqueue(int d)
	{
		while ( !s2.isEmpty() )
			s1.push( s2.pop() );
		s1.push(d);
	}

	int dequeue()
	{
		while (!s1.isEmpty())
			s2.push(s1.pop());
		return s2.pop();
	}
};
