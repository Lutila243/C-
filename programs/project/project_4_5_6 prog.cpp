#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main()
{
float text1, text2, text3, mini, cheap, subtotal, total;
float sum1, sum2, sum3;
string FirstName;
char text_cheap;
int counter=0;

float minimum (float text1, float text2, float text3, float mini);

void printlist (int counter, string FirstName, float text1,
                float text2, float text3, float subtotal, float total, float cheap);

ifstream indata;
ofstream outdata;


indata.open("project_4_5_6.txt"); // open input
outdata.open("project_4_5_6Outdata.txt"); // open output to write data


outdata<< fixed << showpoint << setprecision(2);
cout << "processing" << endl;
outdata<<"\nCedric bookstore"<< endl;

outdata<<left <<setw(15) <<"\nSubjects"<<setw(15)<<"text1"<<setw(15)<<"text2"<<setw(15)<<"text3"<<setw(15)<<"subtotal"
<<setw(15)<<"cheapest/amount"<<endl;

for (counter=0; counter < 6; counter++)
{
indata >> FirstName>> text1 >> text2 >> text3;

if (FirstName == "...") break;

subtotal = text1 + text2 + text3 ;

total = total + text1;





outdata<< left << setw(15)<<FirstName<<setw(15)<< text1 <<setw(15)<< text2 <<setw(15)<<text3
<<setw(15)<<subtotal<<setw(15)<<minimum<<endl; // *** setw is better than "\t"



	

 }
indata.close();
outdata.close();
//---------------------------------------------------------------------------------------------------------------


     

 system("PAUSE");
 return 0;
}
  float minimun (float text1, float text2, float text3, float mini){
       
       if (text1<= mini)
        return text1;
        if (text2 <= mini)
        return text2;
       else 
        return text3; 
       
       }
      
    float tot (float text1, float text2, float text3, float subtotal){
    	
    	
	}   
