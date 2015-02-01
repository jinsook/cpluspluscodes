//============================================================================
// Name        : stringproblems.cpp
// Author      : jinsook
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <tr1/unordered_set>
using namespace std;
using namespace std::tr1;


int main() {

	string str("abcdafe");
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	unordered_set<char> set;
	unordered_set<char>::iterator iter;

	for (unsigned i =0; i <str.length(); i++)
	{
		if ( (iter = set.find(str[i])) != set.end() )
		{
		    cout<<"not all unique"<<endl;
		    break;
		}
		else
			set.insert(str[i]);
	}

	return 0;
}
