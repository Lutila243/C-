//first example of an enum type

#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
	enum days{m, t, w, tr, f, sa, su};
	int temp=55;
	days weekend, weekday;

	weekend = sa;
	cout << "\nThe first day of the weekend is: " << weekend;
	weekend = static_cast<days>(weekend+1);
	cout << "\nThe second day of the weekend is: " << weekend;
	weekend = static_cast<days>(weekend+1);
	cout << "\nGoing beyond the ENUM type: " << weekend;

	cout << endl << endl;

    cout << "\n\n*************Other ways to define ENUM is: ";
    enum monthlength { jan=31, feb=28, mar=31 };
    monthlength x;
    x=jan;
    cout << "\nThe length of the month is: " << x;

    x=feb;
    cout << "\nThe length of the month is: " << x;

    x=mar;
    cout << "\nThe length of the month is: " << x;

    cout << "\n\n************Other ways to define ENUM is: ";
    enum myenum { one=12, two, three, four=-3, five };
    myenum y;
    y=one;
    cout << "\nThe value of the variable is: " << y;

    y=two;
    cout << "\nThe value of the variable is: " << y;

    y=three;
    cout << "\nThe value of the variable is: " << y;

    y=four;
    cout << "\nThe value of the variable is: " << y;

    y=five;
    cout << "\nThe value of the variable is: " << y;

 cout << endl << endl;
 system ("PAUSE");
 return 0;
}  // end of main
