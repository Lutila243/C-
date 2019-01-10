#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include<cmath>
/*----------------------------------------------------------------------
 This program 

    Written by Jose Quinones
    Class: CIS 121
    Chapter 6
    ----------------------------------------------------------------------*/

int main(){

using namespace std;
//vareables
ifstream projectData;//main file
ofstream projectOutData;//output file
//retreve from file
string bookStoreName;
double price1, price2, price3;

double  Total;//result of price_no1 + price_no2 + price_no3
double SubTotal1;//result of all prices in coulmn 1
double SubTotal2;//result of all prices in coulmn 2
double SubTotal3;//result of all prices in coulmn 3
double GrandTotal;//result of all prices added together
//logic
projectData.open("projectData.txt");//open the input file
projectOutData.open("projectOutData.txt");//open the output file

cout << fixed << showpoint
     <<setprecision(1);//display two decimal places
projectData >> bookStoreName;
while(projectData){
projectOutData << bookStoreName << endl;
projectData >> bookStoreName;

break;
}

projectData.close();
projectOutData.close();
system("PAUSE");
}//end main
