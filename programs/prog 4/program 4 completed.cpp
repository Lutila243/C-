#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>
	
	// this program calculates phone charges based on service usage
	
  
using namespace std;
int main ()
{
// values of regular service
const double regular_service= 10.00, premium_service=25.00, minute=0.20, minute1=0.10, minute2=0.5;
// values declared

double day_cost=0, night_cost=0;
char servicetype;
string name;
int account_num,minutes, day_minute, night_minute;
 
cout<< fixed<< showpoint<< setprecision(2);
cout<<"\nenter your account number:"<< endl;
cin>> account_num;

cout<<"\n Please enter the type of service purchased:"
    <<"\nR or r (regular),"
    <<"\nP or p (premium),"<< endl;
cin>> servicetype;


 switch(servicetype){
 
 	case 'r':
 	case 'R':
         
   
 		
	
    
	cout<< "\nEnter your day and night call duration:"<< endl;
    cin>>minutes;
    
     if (minutes <=50)
	{
	 
    day_cost=regular_service;




}else (minutes>=50);{

day_cost=regular_service +(minutes - 50) * minute; //regular calculation
          
          }
	
	      	       
    cout <<"\nAccount number:" <<" "<<account_num;
    cout<<"\nService Type:"<<" "<<servicetype;
    cout<<"\nMinute used:"<<" "<<minutes;
	cout<<"\nAmount Due is : $" <<" "<< day_cost <<endl;
	   
   

break;
 
 	case 'p':
 	case 'P':
         
    
 		
 
 	cout<< "\nEnter your day or night call duration:"<< endl;
    cin>>day_minute>>night_minute;
	
	if (day_minute <=75)
   
     {
 	day_cost=premium_service;
 }
 
    else 
    
    {
    	day_cost=premium_service +(day_minute - 75) * minute1; //premium calculation 1
	}
 	
 	if (night_minute <=100)
 	
 	{
 	night_cost=premium_service;	
	 }
    
    else 
    
    {
    	night_cost=premium_service +(day_minute - 100) * minute2; //premium calculation 2
	}
	      cout <<"\nAccount number:" <<" "<<account_num;
    cout<<"\nService Type:"<<" "<<servicetype;
    cout<<"\nMinute used:"<<" "<<day_minute+night_minute;
	cout<<"\nAmount Due is : $" <<" "<< premium_service+day_cost+night_cost <<endl;
	    
break;
	default :
		cout<<"Invalide Entry"<<endl;
		
		//End of program
		

}
system ("pause");
return 0;
}
