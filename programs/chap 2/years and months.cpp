#include <iostream>
#include <stdlib.h> 
#include<string>
using namespace std;
int main () 
/* This program is designed to define a variable and ask for years and months*/
{ 
const int  year= 365, month= 30;
int years, months;
cout <<"\nWhat is your years?"<< endl;
cin>>years;
cout <<"\n what is your months?"<<endl;
cin>>months;
cout<<"your years are"<< " "<<year * years <<" "<< "days"<<endl;
cout<< "your months are"<< " "<< month * months<<" "<<"days" <<endl;
cout<<" "<< " have a nice day"<< endl;

// end of the program
system ("pause") ;
return 0;
}
