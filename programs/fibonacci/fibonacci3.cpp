#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()

{ 
  int num;
  int sum;
  cout<<"\n what is your number :"<<endl;
  cin>>num;
  sum=num;
  
  while (num != -1)
  {
  	sum= sum + 2 * num;
  	cin>> num;
  }
  
 cout<<"sum ="<< sum << endl; 
  system("pause");
  return 0;
}
