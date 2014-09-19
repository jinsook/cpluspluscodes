#include <string>
#include <iostream>
#include <tr1/unordered_set>
#include <tr1/unordered_map>

using namespace std;
using namespace std::tr1;

// 1.1 To determine if a string has all unique characters.
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

// 1.1 what if you cannot use additional data structures?
bool hasAllUniqueChars2(string str)
{//O(n^2)

	for (unsigned i=0; i < str.length(); i++ )
		for (unsigned j=i+1; j < str.length(); j++ )
			if ( str.at(i) == str.at(j) )
				return false;

	return true;
}

// 1.1 what if you cannot use additional data structures?
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

#include <string.h>
// 1.2 implement a function and void reverse(char*str) in C or C++
// which reverses a null terminated string
void reverseString(char* str)
{
	if ( !str ) return;

	unsigned len = strlen(str);
	unsigned half = len/2;

	for ( unsigned i = 0; i < half; i ++)
	{
		char tmp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = tmp;
	}
}
// as in book answer
void reverseString2(char* str)
{
	if ( !str ) return;

	char *end = str;
	while ( *end )
		end ++;
	end --;

	while ( str < end)
	{
		char tmp = *str;
		*str = *end;
		*end = tmp;
		str ++;
		end --;
	}
}

void countChar(const string&str, unordered_map<char, unsigned>& map)
{
	unordered_map<char,unsigned>::iterator mapIter;
	for ( unsigned i = 0; i < str.length(); i++)
	{
		char c = str.at(i);
		if ( (mapIter = map.find(c) ) == map.end() )
			map.insert( pair<char, unsigned>(c, 1) );
		else
			mapIter->second ++;
	}
}

//1.3 Given two strings, write a method to decide if one is a permutation of the other
bool isPermutation(const string& str1, const string& str2)
{
	if (str1.length() != str2.length() ) return false;

	typedef unordered_map<char,unsigned> Mymap;
	Mymap str1Map;
	Mymap str2Map;

	countChar(str1, str1Map);
	countChar(str2, str2Map);

	try {
        for ( Mymap::iterator iter = str1Map.begin(); iter != str1Map.end(); iter ++ )
        {
         //       cout<<"str1:"<<iter->first<<":"<<iter->second<<endl;
         //       cout<<"str2:     "<<str2Map[iter->first]<<endl;
                if ( str2Map[iter->first] != iter->second ) return false;
                str2Map.erase(iter->first);
        }
	}
	catch (exception ex)
	{
		return false;
	}

	if (str2Map.size() > 0 ) return false;

	return true;
}

#include <algorithm>
//as in a book answer, sort and compare
bool isPermutation2(const string& str1, const string& str2)
{
	string nStr1(str1);
	string nStr2(str2);

	sort(nStr1.begin(), nStr1.end() );
	sort(nStr2.begin(), nStr2.end() );
	cout<<nStr1<<endl;
	cout<<nStr2<<endl;
	return nStr1.compare(nStr2) == 0;
}
