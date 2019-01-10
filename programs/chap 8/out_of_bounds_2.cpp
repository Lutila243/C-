/*This program will demonstrate the concepts of out of bound */


#include <iostream.h>
#include <stdlib.h>

int main()
{
 int array_1[10] = {000, 111, 222, 333, 444, 555, 666, 777, 888, 999}; //create and initilize array.
 int array_2[10]; // just create the array and initilize it later

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
 cout << "\narray_2[7] = " << array_2[7];
 cout << "\narray_2[12] = " << array_2[12]; // out of bounds

 cout << "\n\nHere we go... addresses.";
 cout << "\narray_1 = " << array_1;
 cout << "\narray_1[0] = " << &array_1[0] << "--> " << array_1[0]; // address of the element
 cout << "\narray_1[1] = " << &array_1[1] << "--> " << array_1[1]; // address of the element
 cout << "\narray_1[2] = " << &array_1[2] << "--> " << array_1[2]; // address of the element
 cout << "\narray_1[3] = " << &array_1[3] << "--> " << array_1[3]; // address of the element
 cout << "\narray_1[4] = " << &array_1[4] << "--> " << array_1[4]; // address of the element
 cout << "\narray_1[5] = " << &array_1[5] << "--> " << array_1[5]; // address of the element
 cout << "\narray_1[6] = " << &array_1[6] << "--> " << array_1[6]; // address of the element
 cout << "\narray_1[7] = " << &array_1[7] << "--> " << array_1[7]; // address of the element
 cout << "\narray_1[8] = " << &array_1[8] << "--> " << array_1[8]; // address of the element
 cout << "\narray_1[9] = " << &array_1[9] << "--> " << array_1[9]; // address of the element
 
 cout << "\narray_1[10] = " << &array_1[10] << "--> " << array_1[10]; // address of the element
 cout << "\narray_1[11] = " << &array_1[11] << "--> " << array_1[11]; // address of the element
 cout << "\narray_1[12] = " << &array_1[12] << "--> " << array_1[12]; // address of the element
 cout << "\narray_1[13] = " << &array_1[13] << "--> " << array_1[13]; // address of the element
 cout << "\narray_1[14] = " << &array_1[14] << "--> " << array_1[14]; // address of the element

 cout << "\n\nAddresses of the second array.... ";
 cout << "\narray_2 = " << &array_2; // address of the element
 cout << "\narray_2[0] = " << &array_2[0] << "--> " << array_2[0]; // address of the element
 cout << "\narray_2[1] = " << &array_2[1] << "--> " << array_2[1]; // address of the element
 cout << "\narray_2[2] = " << &array_2[2] << "--> " << array_2[2]; // address of the element
 cout << "\narray_2[3] = " << &array_2[3] << "--> " << array_2[3]; // address of the element
 cout << "\narray_2[4] = " << &array_2[4] << "--> " << array_2[4]; // address of the element
 cout << "\narray_2[5] = " << &array_2[5] << "--> " << array_2[5]; // address of the element
 cout << "\narray_2[6] = " << &array_2[6] << "--> " << array_2[6]; // address of the element
 cout << "\narray_2[7] = " << &array_2[7] << "--> " << array_2[7]; // address of the element
 cout << "\narray_2[8] = " << &array_2[8] << "--> " << array_2[8]; // address of the element
 cout << "\narray_2[9] = " << &array_2[9] << "--> " << array_2[9]; // address of the element

 cout << "\narray_2[10] = " << &array_2[10] << "--> " << array_2[10]; // address of the element
 cout << "\narray_2[11] = " << &array_2[11] << "--> " << array_2[11]; // address of the element
 cout << "\narray_2[12] = " << &array_2[12] << "--> " << array_2[12]; // address of the element
 cout << "\narray_2[13] = " << &array_2[13] << "--> " << array_2[13]; // address of the element
 cout << "\narray_2[14] = " << &array_2[14] << "--> " << array_2[14]; // address of the element


cout << "\n\narray_2[4] = " << array_2[4];
*&array_2[4] = 99999;
cout << "\narray_2[4] = " << array_2[4];

// See p. 796  for more information/confusion!!!!!!!!!

 cout << endl << endl;
      system("PAUSE");
      return 0;
}
