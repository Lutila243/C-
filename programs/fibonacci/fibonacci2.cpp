#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()

{ 
  int num= 0;
while (num * num <= 6 * num)
{
num= num + 1;
cout<< num << " ";	
}
 cout<< endl; 
  system("pause");
  return 0;
}
