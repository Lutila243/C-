#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main ()
{
   /* this program outputs the following: income before and after taxes from
    my summer job, the money that i spend on clothes and other accessories,
     on school supplies, to buy savings bonds, the money that my parents spend
      to buy additional savings bonds for me */ 
const float hours=40, weeks=5, tax=.14 , clothes=53.32, supplies=5.332, saving=118.637;
float sal, gross, net, addbonds;
cout<< "\n what is your hourly wage? ";
cin>> sal;
gross = sal* hours * weeks;
net = gross - (gross * tax);
addbonds= saving * 0.50 ; 

cout << "\nmy income before taxes is : " << gross;
cout << "\nmy income after taxes is :"  << net;
cout << "\nthe amount that i spend for clothes and others accessories :" << clothes;
cout << "\nthe amount that i spend on school supplies :" << supplies;
cout << "\nthe amount spend to buy savings bonds :" <<saving;
cout << "\n the amount that my parents spend to buy additional savings bonds for me :"<< addbonds;
cout << "\nGOODBYE!" <<endl;
system ("pause");
return 0;
}
