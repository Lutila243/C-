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
#include <fstream>


using namespace std;




int main()
{
	int counter = 0;
	 double sqrt = 0;
	 double three;

   double alpha[50];
   
   for(int index = 0; index < 50; index++) 
{
	
	counter++;
	alpha[index] = index;
	if(counter<= 24){
		
		sqrt = alpha[index] * alpha[index];
		cout<<sqrt<< " * ";
	} else{
		three= alpha[index] * 3;
		cout<< three<< " * ";
	}
	if (alpha[index] == 10){
		
		cout<< "\n"; 
	}
	else if(alpha[index]== 20){
		cout<<"\n";
		
			
		} 
	else if(alpha[index]== 30){
		cout<<"\n";
    }
    else if(alpha[index]== 40){
		cout<<"\n";
	}
	else if(alpha[index]== 50){
		cout<<"\n";
	}
}
cout<<"\n ";
	system("PAUSE");
	return 0;

}




