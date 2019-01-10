// C++ for Scientists and Engineers
// This example demonstrates various string functions.

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
 string message;
 int  i;




 for (i=1; i<=5; i++) {
   cout << "\nTell me a string: ";
   getline(cin, message);
   cout << "\nYour string is: " << message;
   cout << "\n\nThe length of the string is: " << message.length();
   cout << "\n\nFound \"the\" in the string at position: " << message.find("the");
   message.replace(3, 5, "WOW!");
   cout << "\n\nYour new string is: " << message;
   cout << "\n\nThe length of the NEW string is: " << message.length();
   cout << endl << endl;

 }  // end of for loop


      system("PAUSE");
      return 0;
}
