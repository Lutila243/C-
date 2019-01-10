#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cmath>



using namespace std;

int main()
{
float test1, test2, test3, cheap, subtotal, total;
string FirstName;

int counter=0;



void printlist (int counter, string FirstName, float test1,
                float test2, float test3, float subtotal, float total, float cheap);

ifstream indata;
ofstream outdata;


indata.open("project_1_2_3.txt"); // open input
outdata.open("project_1_2_3Outdata.txt"); // open output to write data


outdata<< fixed << showpoint << setprecision(2);
cout << "processing" << endl;
outdata<<"\nCedric bookstore"<< endl;

outdata<<left <<setw(15) <<"\nSubjects"<<setw(15)<<"text1"<<setw(15)<<"text2"<<setw(15)<<"text3"<<setw(15)<<"total"
<<setw(15)<<"cheapest/amount"<<endl;

for (counter=0; counter < 5; counter++)
{
indata >> FirstName>> test1 >> test2 >> test3;

if (FirstName == "...") break;

subtotal = test1 + test2 + test3 ;

total = total +  subtotal;
cheap = cheap + min(test1, test2);

outdata<< left << setw(15)<<FirstName<<setw(15)<< test1 <<setw(15)<< test2 <<setw(15)<<test3
<<setw(15)<<subtotal<<setw(15)<<cheap<<endl; // *** setw is better than "\t"



 }
indata.close();
outdata.close();
//---------------------------------------------------------------------------------------------------------------


     

 system("PAUSE");
 return 0;
}

