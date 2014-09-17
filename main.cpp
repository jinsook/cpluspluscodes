#include <iostream>
#include <boost/array.hpp>

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
    return 0;
}
