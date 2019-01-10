#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


void get_average(int grades_array[], int size);  //function prototypes
void get_minimum(int grades_array[], int size);
void get_maximum(int grades_array[], int size);


int main()
{
int size = 20;
int grades_array[size]; //declaring array
int i;

float grade, min, max, avg, avg_test, sum; //declaring variables
char grade_A, B, C, D, F;  //letter grades for switch statement
char n, x, a, choice; //returns for if/switch statement, n is min, x is max, a is average.


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
cout << "Please choose(a, n, x): Average(a), Minimum(n), or Maximum(x)" << endl;
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
               default: 
                cout << "Invalid code." << endl;
               }


cout << "\n\n\n\n"; //for asthetics 
infile.close();
system ("pause") ;
return 0;
} //end of main


void get_average (int grades_array[], int size) {  //function to find average
       int i, sum = 0;
       double avg;
       for (i = 0; i < size; i++) {   //****needs to be void?? dont know*****
           sum = sum + grades_array[i];
           }
           avg = double(sum) / size;
           cout << "The average is: " << avg;
       }


void get_minimum (int grades_array[], int size) {  //function to find minimum
      int i;
      int min = grades_array[0];
      for (i = 0; i < size ; i++) {
          if (grades_array[i] < min)
          min = grades_array[i];
          }
          cout << "The minimum is: " << min;
      }
      
void get_maximum (int grades_array[], int size) {  //function to find maximum
      int i;
      int max = grades_array[0];
      for (i = 0; i < size ; i++) {
          if (grades_array[i] > max)
          max = grades_array[i];
          }
          cout << "The maximum is: " << max;
      }
char courseGrade (int score){

     switch (score / 10){
          case 0:
          case 1: 
          case 2:
          case 3:
          case 4:
          case 5:
               return 'F';
          case 6: 
               return 'D';
          case 7:
               return 'C';
          case 8: 
               return 'B';
          case 9: 
               return 'A';                                       
            
            }
     }
