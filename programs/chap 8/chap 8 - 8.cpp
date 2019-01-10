/*****************************************************************
	Date 10/05/15:
	
*****************************************************************/

/*****************************************************************
********************  By: cedric l mulumba  **********************
*****************************************************************/
#include<cmath>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
int list[10];

for (int i = 0; i < 5; i++)
{
	list[i] = i * (i - 1);
	if (i % 2 == 0)
	   list[i] = list[i] + i;
	else if (i % 3 == 0) 
	     list[i] = list[i] - i;
    else if (i > 0)
         list[i] = list[i] - list[i - 1];
}
	
	

	system("PAUSE");
	return 0;
}
