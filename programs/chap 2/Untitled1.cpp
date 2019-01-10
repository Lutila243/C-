#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main ()
{
	
	// this program calculates my income and expense
	
   /* this program outputs the following: income before and after taxes from
    my summer job, the money that i spend on clothes and other accessories,
     on school supplies, to buy savings bonds, the money that my parents spend
      to buy additional savings bonds for me */ 
const float hours=40, weeks=5, tax=.14 ;
float sal, gross, net, clothes, supplies, saving,remain , addbonds; 
cout<< "\n what is your hourly wage? ";
cin>> sal;
gross = sal* hours * weeks;
net = gross - (gross * tax);
clothes=net * .1;
supplies=net * .01;
remain = net - (clothes + supplies);
saving= remain * .25;
addbonds= saving * 0.50 ; 

cout << "\nmy income before taxes is : " << gross;
cout << "\nmy income after taxes is :"  << net;
cout << "\nthe amount that i spend on clothes and others accessories is:" << clothes;
cout << "\nthe amount that i spend on school supplies is :" << supplies;
cout << "\nthe amount that i spend to buy savings bonds is :" <<saving;
cout << "\n the amount that my parents spend to buy savings bonds is:"<< addbonds;
cout << "\nGOODBYE!" <<endl;
system ("pause");
return 0;
}
