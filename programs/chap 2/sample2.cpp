#include <iostream.h>
#include <stdlib.h>
#include <string>

int main()
{
/*----------------------------------------------------------------------
    This program will ask your name, height in feet and inches. THen it
    will print out your name with height in inches.

    Written by Charu Trivedi
    Class: CIS 121
    Chapter 2
    ----------------------------------------------------------------------*/


using namespace std;

    string name;
    int feet, inches;
    const int inches_per_foot = 12;

	cout << "\nWhat is your name: ";
    cin >> name;
    cout << "\nWhat is your height in feet? ";
    cin >> feet;
    cout << "\nWhat is your height in inches? ";
    cin >> inches;
    cout << "\nYour name is: " << name << endl;
    cout << "\nYour height in inches is: " << feet * inches_per_foot + inches << endl << endl;
    cout << "\nGOODBYE!" << endl << endl;
      system("PAUSE");
      return 0;
}
