//header files
#include<iostream>
#include<stdlib.h>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;

//prototype functions
void readDate(int& month, int& day, int& year); //reference parameters
void printDate(int month, int day, int year); //value parameters

//initialize constants

//initialize global variables

int main()
{
  //initialize automatic variables
  int mm, dd, yy;
  readDate(mm, dd, yy);
  printDate(mm, dd, yy);

  cout << "Press Enter key to exit...";
  cin.get(); cin.get(); // make DOS window stay open

   system("pause");
 return 0;
}

//function definitions
void readDate(int& month, int& day, int& year)
{
  char ch; //local variable
  cout << "Enter a date (mm/dd/year): ";
  cin >> month >> ch >> day >> ch >> year;
}

void printDate(int month, int day, int year)
{
  cout << "The date is " << month << '-' << day;
  cout << '-' << year << endl;
}
