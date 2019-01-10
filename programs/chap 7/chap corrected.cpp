#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
string first="", second="Cedric", third="Mulumba";
string new_string;
int i;
double wage,hours, total;

cout<< fixed<< showpoint<< setprecision(2);
cout<<"\n\n";
cout<<"First ="<<" "<<", Second = "<<second<<" "<<", Thrid = "<<third<<endl;

cout<<"\nThe lenght of the 3 strings are:"<<" "<<first.length()<<", "<<second.length()<<", "<<third.length()<<endl;
cout<<"\nThe full name is:"<<" "<<second.insert(6,third)<<endl;
cout<<"\nFIRST string is"<<" "<<first.empty()<<endl;
cout<<"\nFIRST string is"<<" "<<second.empty()<<endl;
cout<<"\nFIRST string is"<<" "<<third.empty()<<endl;
cout<<"\nYour first initial with last name is:"<<" "<<second.replace(1,12,third)<<endl;

cout<<"\nWhat is your hourly wage?"<<" ";
cin>>wage;
cout<<endl;
cout<<"\nHow many hours did you work?"<<" ";
cin>>hours;
cout<<endl;
total = (wage * hours);
cout<<"\nYour Hourly Wage is:"<<" "<<"$"<<(total)<<endl;
cout<<"\nGood Bye..."<<"\n"<<endl;





system("PAUSE");
 return 0;
}
