/*This program will demonstrate the concepts of out of bound */


#include <iostream.h>
#include <stdlib.h>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    
 int x, y;
 
 string names[] = {"John", "Bob", "Mary", "Jane"}; //create and initilize array.
 string weekdays[] = {"Monday\t", "Tuesday\t", "Wednesday", "Thursday", "Friday"};
 int hours[4][5] = { {7, 3, 4, 10, 15},
                     {2, 4, 4, 11, 13},
                     {1, 8, 6, 17, 4},
                     {6, 3, 12, 5, 7} };
                     
 cout << "\t";
 // print the table
 for (x=0; x<5; x++) 
     cout << weekdays[x] << "\t";
 
 cout << endl;
 for (x=0; x<4; x++) {
     cout  << names[x] << "\t";
     for (y=0; y<5; y++) {
         cout << hours[x][y] << "\t\t";
     }
     cout << endl;
}
 cout << endl << endl;
      system("PAUSE");
      return 0;
}
