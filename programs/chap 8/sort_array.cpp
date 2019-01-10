/*  Use BUBBLE sort to sort the contents of an array in ascending order  */


#include <iostream.h>
#include <stdlib.h>

using namespace std;

int main()
{

int array1[10] = {23, 45, 0, 12, 16, -5, 34, 78, 9, -14};
int x = 0; // keeps trackof subscripts
int temp = 0; //varianle used for swapping
int y; // loop variable

cout << "\n\nThere are " << sizeof(array1)/sizeof(int) << " elements in the array.\n\n";

cout << "\n\n****** Befor sorting the array.";

for (y=0; y<=9; y++) {
  cout << "\nArray element " << y << "has the value " << array1[y];
}

for (x=0; x<=9; x++) {
  for (y=x; y<=9; y++) {
    if (array1[x] > array1[y]) { // swap necessary
      temp = array1[y];
      array1[y] = array1[x];
      array1[x] = temp;
    }  // end of if
  }  // increment subscript
} // end of while

cout << "\n\n*****After sorting the array.";

for (y=0; y<=9; y++) {
  cout << "\nArray element " << y << "has the value " << array1[y];
}

cout << endl;
      system("PAUSE");
      return 0;
}
