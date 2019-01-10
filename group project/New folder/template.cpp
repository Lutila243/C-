/*
A program that will read 20 test scores from a file, output the 20 scores,
finds the minimum score, maximum value, average of the tests, and finally a count of grades. 
*/

#include <iostream.h>
#include <iomanip.h>
#include <fstream>
using namespace std;


void get_average(int grades_array[], int size);  //function prototypes
void get_minimum(int grades_array[], int size); 
void get_maximum(int grades_array[], int size);
void get_letters(int grades_array[], int size);


int main()
{
int size = 20;
int grades_array[size]; //declaring array
int i;

float grade, min, max, avg, avg_test, sum; //declaring variables
char n, x, a, l, choice; //returns for if/switch statement, n is min, x is max, a is average.


ifstream infile; //declaring infile 
infile.open("input.txt");

cout << fixed << showpoint << setprecision(2); //setting precision
cout << "Program by MUDE" << endl;             //output of team name and
cout << "By Cedric Mulumba and James Denesha" << endl; //our names. 
cout << "The score(s) are as follows: " << endl;          

for (i = 0; i < 20; i++) { //for loop to take in and output scores. 
    infile >> grades_array[i];  
    cout << grades_array[i] << " " << endl;
    
} //end of for loop.


cout << endl; //For asthetics
cout << "Please choose(A, N, X, or L): Average(A), Minimum(N), Maximum(X)," ;
cout << "\nor Letter Grade Count(L) " << endl;
cin >> choice;  //switch input


switch(choice) {           //switch to output one of the follow, average, min or max.
               case 'a':
               case 'A':
                    get_average(grades_array , 20);  //calling function to find average
               break;
               
               case 'n':
               case 'N':
                    get_minimum(grades_array , 20); //calling function to find minimum 
               break;
               
               case 'x':
               case 'X':
                     get_maximum(grades_array , 20); //calling function to find maximum
               break;
               case 'l':
               case 'L':
                    get_letters(grades_array , 20);
                    break;
                    
               default: 
               cout << "Invalid code." << endl;
               }
               
cout << endl;               
cout << "We hope that you all enjoyed this class. Thank you Prof. Trivedi." << endl; //Friendly Note               

cout << "\n\n\n\n"; //for asthetics 
infile.close();
system ("pause") ;
return 0;
} //end of main


void get_letters (int grades_array[], int size) { //function to find letter grades
     int i;
     int a = 0, b = 0, c = 0, d = 0, f = 0;
     for (i = 0; i < size; i++) {
         
    if (grades_array[i] > 90 )  { //if/else if to find # of #'s within ranges.
    a = a + 1;
    }
    else if ((grades_array[i] >= 80) && (grades_array[i] <= 89 ))  {
    b = b + 1;
    }
    else if ((grades_array[i] >= 70) && (grades_array[i] <= 79 ))  {
    c = c + 1;
    }
    else if ((grades_array[i] >= 60) && (grades_array[i] <= 69 ))  {
    d = d + 1;
    }
    else if (grades_array[i] <= 59)   {
    f = f + 1;
    }
}
cout << "The number of A's is : " << a << endl;  //outputting number of letter grades
cout << "The number of B's is : " << b << endl;  
cout << "The number of C's is : " << c << endl;
cout << "The number of D's is : " << d << endl;
cout << "The number of F's is : " << f << endl;

     }

void get_average (int grades_array[], int size) {  //function to find average
       int i, sum = 0;
       double avg;
       for (i = 0; i < size; i++) {   
           sum = sum + grades_array[i];
           }
           avg = double(sum) / size;
           cout << "****The average is: " << avg << "****";
       }


void get_minimum (int grades_array[], int size) {  //function to find minimum
      int i;
      int min = grades_array[0];
      for (i = 0; i < size ; i++) {
          if (grades_array[i] < min)
          min = grades_array[i];
          }
          cout << "****The minimum is: " << min << "****";
      }
      
void get_maximum (int grades_array[], int size) {  //function to find maximum
      int i;
      int max = grades_array[0];
      for (i = 0; i < size ; i++) {
          if (grades_array[i] > max)
          max = grades_array[i];
          }
          cout << "****The maximum is: " << max << "****";
      }
