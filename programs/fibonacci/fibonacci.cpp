#include <iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()

{ 
  

  int i = 2;
  int temp = 1 ;
  while (i < 10)
  {
  	temp= temp* (i - 1);
  	i= i + 1;
  }
  
  cout<<"i ="<< i <<"and temp="<< temp <<endl;
  
  system("pause");
  return 0;
}
