
#include <iostream>
#include <iomanip.h>
#include <fstream>
using namespace std;


float get_average(int grades_array[], int size);  //function prototypes
float get_minimum(int grades_array[], int size);
float get_maximum(int grades_array[], int size);


int main()
{
int size = 20;
int grades_array[size]; //declaring array
int i;

float grade, min, max, avg, avg_test, sum; //declaring variables
char grade_A, B, C, D, F;  //letter grades for switch statement
char n, x, a; //returns for if/switch statement, n is min, x is max, a is average.


ifstream infile; //declaring infile 
infile.open("input.txt");

cout << fixed << showpoint << setprecision(2); //setting precision
cout << "Program by GROUP NAME" << endl;             //output of team name and
cout << "By Cedric Mulumba and James Denesha" << endl; //our names. Needs a group name, left it in caps.
cout << "The score are as follows: " << endl;          

sum = 0;
for (i = 0; i < 20; i++) { //for loop to take in and output scores. 
    infile >> grades_array[i];  
    cout << grades_array[i] << " " << endl;
} //end of for loop.


avg = get_average(grades_array , 20);  //calling function to find average
min = get_minimum(grades_array , 20); //calling function to find minimum
max = get_maximum(grades_array , 20); //calling function to find maximum
                                      // **I think all these need to be done as void so **
                                      // a value will probably not work


cout << "\nAverage is : " << avg << endl; //outputting results from funtions
cout << "\nSmallest is : " << min << endl; //**THIS IS THE STUFF WHICH NEEDS TO BE **
cout << "\nMaximum is : " << max << endl;  //**IN THE SWITCH STATEMENTS**


cout << "\n\n\n\n"; //for asthetics 
infile.close();
system ("pause") ;
return 0;
} //end of main


float get_average (int grades_array[], int size) {  //function to find average
       int i, sum = 0;
       double avg;
       for (i = 0; i < size; i++) {   //****needs to be void?? dont know*****
           sum = sum + grades_array[i];
           }
           avg = double(sum) / size;
           return avg;
       }


float get_minimum (int grades_array[], int size) {  //function to find minimum
      int i;
      int min = grades_array[0];
      for (i = 0; i < size ; i++) {
          if (grades_array[i] < min)
          min = grades_array[i];
          }
          return min;
      }
      
float get_maximum (int grades_array[], int size) {  //function to find maximum
      int i;
      int max = grades_array[0];
      for (i = 0; i < size ; i++) {
          if (grades_array[i] > max)
          max = grades_array[i];
          }
          return max;
      }

