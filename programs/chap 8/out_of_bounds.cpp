/*This program will demonstrate the concepts of out of bound */


#include <iostream.h>
#include <stdlib.h>

int main()
{
 int array_1[10] = {0}; //create and initilize array.
 int array_2[10]; // just create the array and initilize it later
 
 double array_3[10] = {12.6, 11.1, 12.2, 13, 14, 78, 56.0, 10.45, 9.3, 3.3}; //  create the array and initilize it 

 int i, j;  //some variables

 cout << "\n\nPrinting the first array.";
 for (i=0; i<=9; i++) {
   cout << "\n" << array_1[i];
 }

 for (i=0; i<10; i++) {
   cout << "\nPlease tell me an integer value: ";
   cin >> array_2[i];
 }  // end of initilization of array_2

 cout << "\nPrinting the first and second arrays.";
 for (i=0; i<=9; i++) {
   cout << "\n" << array_1[i];
 }
 for (i=0; i<=9; i++) {
   cout << "\n" << array_2[i];
 }

 cout << "\n\nHere we go... Out of bounds.";
 cout << "\narray_1[7] = " << array_1[7];
 cout << "\narray_1[12] = " << array_1[12]; // out of bounds

 

 cout << "\n\nCopying an array.... ";
 for (i=0; i<10; i++) {
   array_1[i] = array_2[i];
 }
  cout << "\nPrinting the first array.";
 for (i=0; i<=9; i++) {
   cout << "\n" << array_1[i];
 }
 
 cout << "\n\nHere we go... addresses.";
 cout << "\nInteger data type takes up: " << sizeof(int);
 cout << "\narray_1 = " << array_1;
 cout << "\narray_1[2] = " << &array_1[2]; // address of the element
 cout << "\narray_1[3] = " << &array_1[3]; // address of the element
 cout << "\narray_1[4] = " << &array_1[4]; // address of the element
 
 
 
 
 cout << "\nInteger data type takes up: " << sizeof(int);
 cout << "\narray_2 = " << array_2;
 cout << "\narray_2[2] = " << &array_2[2]; // address of the element
 cout << "\narray_2[3] = " << &array_2[3]; // address of the element
 cout << "\narray_2[4] = " << &array_2[4]; // address of the element
 
  cout << "\nFloat data type takes up: " << sizeof(double);
 cout << "\narray_3 = " << array_3;
 cout << "\narray_3[2] = " << &array_3[2]; // address of the element
 cout << "\narray_3[3] = " << &array_3[3]; // address of the element
 cout << "\narray_3[4] = " << &array_3[4]; // address of the element
 
 cout << "\n\n*** Using array 2 to print values from array 1 ***" << endl;
 cout << "\n value from array 1 " << endl;
 cout << "\narray_1[0] = " << array_1[0]; // going actally into the next array (array_2[12])
 cout << "\narray_1[1] = " << array_2[1]; // going actally into the next array (array_2[13])
 cout << "\narray_1[2] = " << array_2[2]; // going actally into the next array (array_2[14])
  cout << "\n value from array 2 ==> beyond its limit " << endl;
 cout << "\narray_2[12] = " << array_2[12]; // going actally into the next array (array_2[12])
 cout << "\narray_2[13] = " << array_2[13]; // going actally into the next array (array_2[13])
 cout << "\narray_2[14] = " << array_2[14]; // going actally into the next array (array_2[14])
 
 cout << endl << endl;
      system("PAUSE");
      return 0;
}
