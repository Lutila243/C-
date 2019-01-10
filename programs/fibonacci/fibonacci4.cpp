#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()

{ 
  

  int num;
  int count = 0;
  cin>> num;
   while (num != -999)
  {
         count++;
         cout<< num % count <<" ";
         cin>>num;
  }
         cout<<endl;
         
  system("pause");
  return 0;
}
