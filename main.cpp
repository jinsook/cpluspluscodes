#include <iostream>
#include <boost/array.hpp>
#include <string.h>

#include "array_strings.h"

struct foo{
	char a;
	int c;
	char *b;


};


using namespace std;
int main(int argc , char**argv)
{
	using namespace std;
	cout<< sizeof(foo)<<endl;

    boost::array<int, 4> arr = {{1,2,3,4}};
    cout << "hi" << arr[0]<<endl;

    cout<<hasAllUniqueChars( string("abcdeefgh"))<<endl;
    cout<<hasAllUniqueChars( string("abcdefghi"))<<endl;

    cout<<hasAllUniqueChars2( string("abcdeefgh"))<<endl;
    cout<<hasAllUniqueChars2( string("abcdefghi"))<<endl;

    cout<<hasAllUniqueChars3( string("abcdeefgh"))<<endl;
    cout<<hasAllUniqueChars3( string("abcdefghi"))<<endl;

    char str1[256];

    strcpy( str1, "jin sook");
    cout<<str1<<endl;
    reverseString( str1);
    cout<<str1<<endl;

    strcpy( str1, "jin");
    cout<<str1<<endl;
    reverseString( str1);
    cout<<str1<<endl;

    strcpy( str1, "jin sook");
    cout<<str1<<endl;
    reverseString2( str1);
    cout<<str1<<endl;

    strcpy( str1, "jin");
    cout<<str1<<endl;
    reverseString2( str1);
    cout<<str1<<endl;

    cout<<"isPermutation:abca:cbaa-->"<<isPermutation(string("abca"), string("cbaa") )<<endl;
    cout<<"isPermutation:abc:baa-->"<<isPermutation(string("abc"), string("baa"))<<endl;

    cout<<"isPermutation2:abca:cbaa-->"<<isPermutation2(string("abca"), string("cbaa") )<<endl;
    cout<<"isPermutation2:abc:baa-->"<<isPermutation2(string("abc"), string("baa"))<<endl;

    return 0;
}
