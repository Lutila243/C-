//problem for namespace

#include <iostream>
#include <stdlib.h>

using namespace std;

int my_int = 98;

namespace Example {

	int my_int = 55;
	int your_int = 100;

	namespace Inner {  //nested namespace
		
		int my_int = 12;
	}  // end of Inner
} // of Example namespace

namespace { // unnamed
    int	d = 88.22;
}  // end of unnamed namespace


int main() {


	cout << "d: " << d << endl;

	cout << "Global my_int: " << my_int << endl;

	cout << "Example --> my_int: " << Example::my_int << endl;

	cout << "Example - Inner --> my_int: " << Example::Inner::my_int << endl;

 system("PAUSE");
 return 0;
} // end of main
