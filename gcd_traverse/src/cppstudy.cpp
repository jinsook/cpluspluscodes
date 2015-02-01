//============================================================================
// Name        : cppstudy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <assert.h>
#include <stack>
using namespace std;

int GCD(int a, int b)
{
	int m = min(a,b);
	int gcd = 1;
	for (int i = m; i > 0; i ++)
	{
		if ( a%i == 0 && b%i == 0)
			return i;
	}
	return gcd;
}

void findTriangle(vector<int> &input)
{

}

void swap(string &str, int i, int j)
{
	char tmp = str[i];
	str[i] = str[j];
	str[j] = tmp;
}
//suppose exp is positive
int pow(int base, int exp )
{
	if (exp==0)
		return 1;

	while( exp > 0 )
	{

		if ( exp & 1)
		{
			return base*pow(base, exp & ~1);
		}

		if (exp) //even
		{
			return pow(base*base, exp >> 1);
		}
	}

	assert(0);
	//return 1/pow( base, -exp);
}
//complexity O(n!)
void permutation(string &str, int level, int end)
{
	if ( level==end )
	{
		cout<<str<<endl;
		return;
	}

    for( int cur = level; cur <= end ; cur++)
    {
        swap(str, level, cur );
        permutation(str, level+1, end);
        swap(str, level, cur);
    }
}

void permutationIter(string& str)
{
	int size = str.size();
	for (int i=0; i< size; i++ )
	{

	}
}


struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k):key(k),
    		left(0), right(0)
    {
    }
};

void traverseInorder(Node *root)
{
    Node *cur = root;
    stack<Node*> st;

    while ( cur || st.size() > 0 )
    {
    	if ( !cur )
    	{
    		cur = st.top();
    		st.pop();
    		cout<<cur->key<<" ";
    		cur = cur->right;
    	}
    	else
    	{
    		st.push(cur);
    		cur = cur->left;
    	}
    }
}

void testTraverse()
{
	Node *n1 = new Node(1);
	Node *n2 = n1->left = new Node(2);
	Node *n3 = n1->right = new Node(3);
	Node *n4 = n2->left = new Node(4);
	Node *n5 = n2->right= new Node(5);
	Node *n6 = n3->left = new Node(6);
	Node *n7 = n3->right= new Node(7);

	traverseInorder(n1);
}



int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//cout<<"GCD 20, 15 = "<<GCD(20,15)<<endl;

	//string str("abcd");
	//permutation(str, 0, 3);
	cout<<"pow ( 2, 5) ="<< pow(2,5)<<endl;
	testTraverse();
	return 0;
}
