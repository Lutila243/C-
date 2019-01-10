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

	string str1, str2;
	cin>>str1>>str2;
	if (str1==str2)
	   cout<<str1 + '!'<<endl;
	else if (str1 > str2)  
	   cout<<str1 + ">" +str2<<endl;
	else
	   cout<<str1 + "<" +str2<<endl;   
	

	system("PAUSE");
	return 0;
}
