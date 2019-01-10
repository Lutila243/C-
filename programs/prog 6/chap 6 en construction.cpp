




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
#include <cmath>


int find  (int num1, int num2)

{
	int first, second;
	
	first= num1 * num2;
	
	second= first - num1 + num2;
	
	if (second > 50)
	     num1 = first / 10;
	 
	else
	     num2 = second / 20;
		 
		 return num1 + num2;    
}

    int discover (int one, int two)
    
    {
    	int secret = 1;
    	for (int i = one; i < two; i++)
    	    secret = secret * 1;
    	    
    	return secret;    
	}
using namespace std;

int main()
{
cout<<find (15, 25)<<endl;
cout<<discover(3, 9)<<endl;
cout<<find (10, 10)<<" "<<discover(10, find (10, 10))<<endl;



cout<< discover(20, 10)<<endl;	
	

	system("PAUSE");
	return 0;
}
