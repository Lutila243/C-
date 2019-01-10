/*****************************************************************
	Date 10/05/15:
	
*****************************************************************/

/*****************************************************************
********************  By: cedric l mulumba  **********************
*****************************************************************/

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
int hours, i;
double wage, total;
       total= wage * hours;

cout<< fixed<< showpoint<< setprecision(2);
cout<<"\nFirst ="<<" "<<"\nSecond = "<<second<<" "<<"\n; Thrid ="<<third<<endl; 
	
cout<<"\nThe lenght of the 3 strings are :"<<"\t "<<first.length()<<", "<<second.length()<<", "<<third.length()<<endl;
cout<<"\nThe full name is :"<<second.insert()<< third.insert()<<endl;
cout<<"\nFIRST string is"<<" "<<first.empty()<<endl;
cout<<"\nFIRST string is"<<" "<<second.empty()<<endl;
cout<<"\nFIRST string is"<<" "<<third.empty()<<endl;	
cout<<"\nYour first initial with last name is :"<<second.replace(1 + third)<<endl;

cout<<"\n\nWhat is your hourly wage?"<<endl;
cin>>wage;
cout<<"\nHow many hours did you work?"<<endl;
cin>>hours;
cout<<"\nYour wage for the last week is :"<<total<<endl;
cout<<"\n\nGood Bye..."<<endl;
	system("PAUSE");
	return 0;
}
