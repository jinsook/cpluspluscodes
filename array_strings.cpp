#include <string>
#include <tr1/unordered_set>
#include <tr1/unordered_map>

using namespace std;
using namespace std::tr1;

//1.1To determine if a string has all unique characters.
bool hasAllUniqueChars(string str)
{//O(n)
	unordered_set<char> map;
	unordered_set<char>::iterator mapit;

	for (unsigned i=0; i < str.length(); i++) {
		char c = str.at(i);
		mapit = map.find(c);
		if ( mapit != map.end() )
			return false;
		else
			map.insert(c);
	}

	return true;
}

//1.1what if you cannot use additional data structures?
bool hasAllUniqueChars2(string str)
{//O(n^2)

	for (unsigned i=0; i < str.length(); i++ )
		for (unsigned j=i+1; j < str.length(); j++ )
			if ( str.at(i) == str.at(j) )
				return false;

	return true;
}

//1.1what if you cannot use additional data structures?
bool hasAllUniqueChars3(string str)
{//O(n) in book answer

	int checker = 0;
	for (unsigned i=0; i < str.length(); i++ ) {
        int val = str.at(i) - 'a';
        if ( ((1 << val) & checker) > 0 )
                return false;
        checker |= ( 1 << val );
	}

	return true;
}
