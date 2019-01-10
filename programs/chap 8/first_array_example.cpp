/*This program will show how to initilize and array, load it, print values
in reverse order, find the smallest and largest values, and average of
all of the elements. */


#include <iostream.h>
#include <stdlib.h>

int main()
{
 int array_1[10] = {0}; //create and initilize array.
 int array_2[10]; // just create the array and initilize it later

 int i, j, sum=0, smallest, largest;  //some variables

 cout << "\n\nPrinting the first array.";
 for (i=0; i<=9; i++) {
   cout << "\n" << array_1[i];
 }

 for (i=0; i<10; i++) {
   cout << "\nPlease tell me an integer value: ";
   cin >> array_2[i];
 }  // end of initilization of array_2

 cout << "\n\nHere are the values of your input in reverse order.";
 // This loop will also find the smallest, largest and total all of the elements
 smallest=array_2[9]; largest=array_2[9];
 for (i=9; i>=0; i--) {
   sum = sum + array_2[i];

   if (smallest > array_2[i])
      smallest = array_2[i];

   if (largest < array_2[i])
      largest = array_2[i];

   cout << "\n" << array_2[i];
 }

 cout << "\n\nThe largest element in the array is: " << largest;
 cout << "\n\nThe smallest element in the array is: " << smallest;
 cout << "\n\nThe average of the array is: " << sum/10 << endl << endl;
      system("PAUSE");
      return 0;
}
