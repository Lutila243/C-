#include <iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main()

{ 
  

  int no_year=0;
   float pop_A , pop_B, gwth_rateA, gwth_rateB;
  
  
  cout<<"\nWhat is the population for City A? ";
  cin>>pop_A;
  
  cout<<"\n What is the population for City B? ";
  cin>>pop_B;
  cout<<"\nWhat is the growth rate for City A? ";
  cin>>gwth_rateA;
  cout<<"\nWhat is the growth rate for City B? ";
  cin>>gwth_rateB;
  cout<<fixed<<showpoint<<setprecision(3)<<endl;
  cout<<"\tYear"<< setw(16)<<"\tCity A"<<setw(25)<<"\tCity B"<<endl;
  
  while(pop_A <= pop_B){
  	
  	                 cout<<fixed<<showpoint<<setprecision(3)<<endl;
                     cout<<"\t" << no_year<<setw(25)<<pop_A<<setw(27)<<pop_B<<endl;  
                     pop_A = pop_A * (gwth_rateA /100) + pop_A;
                     pop_B = pop_B *(gwth_rateB/100 )+ pop_B;
                     no_year++;	
                     continue;
                     
                     
  }
  cout<<"\t"<<no_year<<setw(25)<<pop_A<<setw(27)<<pop_B<<endl;
  cout<<"\nIt has taken "<<no_year<<" for the population of the City A to surpass the popuylation of City B."<<endl;
  cout<<"\nThe population of the City A is :"<<"\t"<<pop_A<<endl;
  cout<<"\nThe population of the City B is :"<<"\t"<<pop_B<<endl;
  cout<<"\nGoodbye"<<endl;
  
  
  
  
  system("pause");
  return 0;
}
