
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
ifstream indata;
ofstream outdata;



float test1, test2, test3, subtotal, total, cheapest;
string FirstName; 
string Secondname;


indata.open("project_1_2_3.txt"); // open input
outdata.open("project_1_2_3Outdata.txt"); // open output to write data


outdata<< fixed << showpoint << setprecision(2);
cout << "processing" << endl;
outdata<<"\nCedric bookstore"<< endl;
indata >> FirstName;

while(indata)
{
	  if ((test1 <= test2) && (test1 <= test3))
	
outdata<<"\nSubjects"<<"\t"<<"text1"<<"\t "<<"text2"<<"\t "<<"text3"<<"\t "<<"total"<<"\t"<<"cheapest/amount"<<endl;
indata >> test1 >> test2 >> test3 >> cheapest;	
outdata<< FirstName<<"\t"<<"\t"<< test1 <<"\t"<< test2 <<"\t"<<test3<<"\t"<<subtotal<<"\t"<<"\t"<<cheapest<<endl;
indata >> test1 >> test2 >> test3 >> cheapest;
outdata<< FirstName<<"\t"<<"\t"<< test1 <<"\t"<< test2 <<"\t"<<test3<<"\t"<<subtotal<<"\t"<<"\t"<<cheapest<<endl;
indata >> test1 >> test2 >> test3 >> cheapest;
outdata<< FirstName<<"\t"<<"\t"<< test1 <<"\t"<< test2 <<"\t"<<test3<<"\t"<<subtotal<<"\t"<<"\t"<<cheapest<<endl;
indata >> test1 >> test2 >> test3 >> cheapest;
outdata<< FirstName<<"\t"<<"\t"<< test1 <<"\t"<< test2 <<"\t"<<test3<<"\t"<<subtotal<<"\t"<<"\t"<<cheapest<<endl;
indata >> test1 >> test2 >> test3 >>cheapest;
outdata<< FirstName<<"\t"<<"\t"<< test1 <<"\t"<< test2 <<"\t"<<test3<<"\t"<<subtotal<<"\t"<<"\t"<<cheapest<<endl;
indata >> test1 >> test2 >> test3 >> cheapest;
outdata<< FirstName<<"\t"<<"\t"<< test1 <<"\t"<< test2 <<"\t"<<test3<<"\t"<<subtotal<<"\t"<<"\t"<<cheapest<<endl;

  cheapest = test1;
  
  subtotal= test1 + test2 + test3;
 indata >> FirstName;
  indata >> Secondname;



break;
 }
indata.close();
 outdata.close();


 system("PAUSE");
 return 0;
}


