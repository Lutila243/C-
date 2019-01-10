#include <iomanip> 
#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h> 

//this program prits the subjects of texts, cost of texts and totals cost across and down.

using namespace std;
int main ()
{
// variable
 float Biology1, Biology2, Biology3, Chemistry1, Chemistry2, Chemistry3, English1, English2, English3, Computer1, Computer2, Computer3, Mathematics1, Mathematics2, Mathematics3;
  float subtotal1, subtotal2, subtotal3, subtotal4, subtotal5, total1, total2, total3, total4;
    ifstream indata;
    ofstream outdata;


    indata.open("project_1_2_3.txt"); // open input
    outdata.open("project_1_2_3Outdata.txt"); // open output to write data

    outdata << fixed << showpoint << setprecision(2);
    
    //Head of the outdata
    
    cout<<"\nCedric bookstore"<< endl;
    cout<<"\nSubjects"<<"\t"<<"text1"<<"\t "<<"text2"<<"\t "<<"text3"<<"\t "<<"total"<<endl;
    
    //Biology calculation
    
    indata>> Biology1>>Biology2>>Biology3;
    subtotal1=Biology1+Biology2+Biology3;
    cout<<"\nBiology"<<"\t \t "<<Biology1<<"\t "<<Biology2<<"\t "<<Biology3<<"\t "<<subtotal1<<endl;
    outdata<<"\nBiology"<<"\t \t "<<Biology1<<"\t "<<Biology2<<"\t "<<Biology3<<"\t "<<subtotal1<<endl;
    
    outdata<<"\nCedric Bookstore"<<endl;
    outdata<<"\nSubjects"<<"\t "<<"text1"<<"\t "<<"text2"<<"\t "<<"text3"<<"\t "<<"total"<<endl;
    
    //Chemistry calculation
    
    indata>>Chemistry1>>Chemistry2>>Chemistry3;
	subtotal2= Chemistry1+Chemistry2+Chemistry3;
    cout<<"\nChemistry"<<"\t "<<Chemistry1<<"\t "<<Chemistry2<<"\t "<<Chemistry3<<"\t "<<subtotal2<<endl;
    outdata<<"\nChemistry"<<"\t "<<Chemistry1<<"\t "<<Chemistry2<<"\t "<<Chemistry3<<"\t "<<subtotal2<<endl;
    
    //English calculation
    
    indata>>English1>>English2>>English3;
    subtotal3=English1+English2+English3;
    cout<<" "<<"\nEnglish"<<"\t \t "<<English1<<"\t "<<English2<<"\t "<<English3<<"\t "<<subtotal3<<endl;
    outdata<<"\t\t "<<"\nEnglish"<<"\t \t "<<English1<<"\t "<<English2<<"\t "<<English3<<"\t "<<subtotal3<<endl;
    
    //Computer calculation
    
    indata>>Computer1>>Computer2>>Computer3;
    subtotal4=Computer1+Computer2+Computer3;
    cout<<"\nComputer"<<"\t "<<Computer1<<"\t "<<Computer2<<"\t "<<Computer3<<"\t "<<subtotal4<<endl;
    outdata<<"\nComputer"<<"\t "<<Computer1<<"\t "<<Computer2<<"\t "<<Computer3<<"\t "<<subtotal4<<endl;
    
    //Mathematics calculation
    
    indata>>Mathematics1>>Mathematics2>>Mathematics3; 
    subtotal5=Mathematics1+Mathematics2+Mathematics3;
    cout<<"\nMathematics"<<"\t "<<Mathematics1<<"\t "<<Mathematics2<<"\t "<<Mathematics3<<"\t "<<subtotal5<<endl;
    outdata<<"\nMathematics"<<"\t "<<Mathematics1<<"\t "<<Mathematics2<<"\t "<<Mathematics3<<"\t "<<subtotal5<<endl;
   
   //Total calculation
   
    total1=Biology1+Chemistry1+English1+Computer1+Mathematics1;
    total2=Biology2+Chemistry2+English2+Computer2+Mathematics2;
    total3=Biology3+Chemistry3+English3+Computer3+Mathematics3;
    total4=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
    cout<<"\nTotal"<<"\t \t "<<total1<<"\t "<<total2<<"\t "<<total3<<"\t "<<total4<<endl;
    outdata<<"\nTotal"<<"\t \t "<<total1<<"\t "<<total2<<"\t "<<total3<<"\t "<<total4<<endl;
    
    indata.close();
	outdata.close();
	
    //end of the program
    
    system ("pause") ;
	 return 0;
}
