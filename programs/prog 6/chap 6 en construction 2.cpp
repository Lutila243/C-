




/*****************************************************************
	Date 10/05/15:
	
*****************************************************************/

/*****************************************************************
********************  By: cedric l mulumba  **********************
*****************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int mystery (int num)
{
	int y = 1;
	
	if (num == 0)
	    return 0;
	else  if (num < 0)
	      for (int count = 0; count > num; count--)
		  y = y - (num + count);
		  
	else 
		  for (int count = 1; count < num; count++)
		  y = y * (num - count);
		  
		  return y;    
}

using namespace std;

int main()
{
cout<<mystery(7)<<endl;
cout<<mystery(0)<<endl;
cout<<mystery(-7)<<endl;
cout<<mystery(10)<<endl;
	
	

	system("PAUSE");
	return 0;
}




