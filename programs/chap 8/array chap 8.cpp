#include <iostream>
#include <stdlib.h>

using namespace std;

const int ARRAY_SIZE = 10;

void initializeArray(int x[], int sizeX);
void printArray(const int x[], int sizeX);
int sumArray(const int x[], int sizeX);
int indexLargestElement(const int x[], int sizeX);
void copyArray(const int x[], int y[], int length);

int main()
{
 int listA[ARRAY_SIZE] = {0};
 int listB[ARRAY_SIZE], listC[ARRAY_SIZE];

 cout << "\nPrint the first array" << endl;
 printArray(listA, ARRAY_SIZE);

 initializeArray(listB, ARRAY_SIZE);

 cout << "\nPrint the second array" << endl;
 printArray(listB, ARRAY_SIZE);

 cout << "\nFind the total for the array" << endl;
 cout << "\nThe total for the second array is: " << sumArray(listB, ARRAY_SIZE);

 cout << "\nFind the largest value in the array" << endl;
 cout << "\nThe largest value in the array is: " << indexLargestElement(listB, ARRAY_SIZE);


 cout << "\nCopy the array to a new one. "  << endl;
 copyArray(listB, listC, ARRAY_SIZE);
 printArray(listC, ARRAY_SIZE);
      system("PAUSE");
      return 0;
}

void printArray(const int x[], int sizeX) {
  int i;
  for (i=0; i<sizeX; i++) {
    cout << "listA element " << x[i] << endl;
  } // end of for loop

} // end of printArray

void initializeArray(int x[], int sizeX) {
  int i;
  for (i=0; i<sizeX; i++) {
    cout << "Tell me the value: ";
    cin >> x[i];
  } // end of for loop

}  // end of initilize array

int sumArray(const int x[], int sizeX) {
  int sum=0, i;
  for (i=0; i<sizeX; i++) {
    sum = sum + x[i];
  } // end of for loop
  return sum;
}  // end of sumArray

int indexLargestElement(const int x[], int sizeX){
  int largest=x[0], i;
  for (i=0; i<sizeX; i++) {
    if (largest < x[i])
       largest = x[i];
  } // end of for loop
  return largest;
}  // end of indexLargestElement

void copyArray(const int x[], int y[], int length) {
  int i;
  for (i=0; i<length; i++) {
    y[i] = x[i];
  } // end of for loop

}  // end of copyArray
