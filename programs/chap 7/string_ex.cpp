//  This example demonstrates various STRING functions

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	string str1 = "Amusement Park";
	string str2 = "Going to";
	string str3 = "the";
	string str;

	cout << str2 + ' ' + str3 + ' ' + str1 << endl;
	cout << str1.length() << endl;
	cout << str1.find('P') << endl; // capital p
	cout << str1.find('p') << endl;  // small p
	cout << str1.substr(1, 5) << endl;
	cout << str1.substr(1,20) << endl;

	cout << str1[13] << endl;
	cout << str1[14] << endl;
	cout << str2[0] << endl;

	str1[14] = '*'; // lets the programmer 
	cout << str1 << endl;
	

	str="ABCDEFGHIJK";
	cout << str << endl;
	cout << str.length() << endl;

	str[0] = 'a';
	str[1] = 'd';

	cout << str << endl;
	str="This is a long string.";
	cout << "\nThe length of the string is: " << str.length();
	str="This is even a longer string.";
	cout << "\nThe length of the string is: " << str.length();

	cout << endl;
system("PAUSE");
return 0;
}  // end of main
