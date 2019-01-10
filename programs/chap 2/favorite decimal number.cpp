#include <iostream>
#include <stdlib.h> 
#include<iomanip>
using namespace std;
int main () 
/* This program is designed to ask user for user's favorite decimal number  */
{ double decimal_number;
cout<< fixed << showpoint<< setprecision(0);
cout <<"\nWhat is your favorite decimal number?"<< endl;
cin>>decimal_number;
cout<<"\nyour favorite decimal number is:"<< " "<<decimal_number <<endl;
cout<<" "<<"have a nice day"<< endl;

// end of the program

 system ("pause") ;
return 0;
}
