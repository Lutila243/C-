#include <iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main()

{ 
  

  int num=0;
   float gal;
   float lit;
   lit= 3.785;
  
  
  cout<<"\nEnter the gallon(s)? to convert to liter ";
  cin>>gal;
  
  
  

  cout<<fixed<<showpoint<<setprecision(3)<<endl;
  cout<<"\tnum"<< setw(16)<<"\tGallon"<<setw(25)<<"\tLiter"<<endl;
  
  while(gal<=20){
  	
  	                 cout<<fixed<<showpoint<<setprecision(3)<<endl;
                     cout<<"\t" << num<<setw(25)<<gal<<setw(27)<<lit<<endl;  
                     gal = lit; 
                  
                     num++;	
                     continue;
                     
                     
  }
 
  
  
  
  system("pause");
  return 0;
}
