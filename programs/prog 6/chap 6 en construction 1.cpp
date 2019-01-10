#include <iostream>
#include <cmath>

int find (int x, int y)
{
    int x, y;
    
    
    first = x * y;
    second = first - x + y;
    
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
	    secret = secret * i;
	    
    
	    return secret;
}

int main()
{
  cin>>x >>y;  
  cout<<discover(x,y)<<endl;  
}
system("pause");
return 0;
