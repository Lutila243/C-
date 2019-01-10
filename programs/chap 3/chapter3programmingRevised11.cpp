//cedric Lutila Mulumba
//CIS-121
//Chapter 3 program.

/*This program is designed to give the output of the increased special payment for the names of the individuals given to perform this program.
this program will calculated the original payment for the three individuals, and give the new payment as a result of the calculations*/

#include <iostream>
#include<iomanip>
#include<fstream>
#include<stdlib.h>
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	
 
float percent_increase, new_salary, old_salary;

 string first, last;
 	
	ifstream indata;
	ofstream outdata;
	
	outdata << fixed << showpoint << setprecision(2);
	 indata.open("Test.txt"); //open input
	outdata.open("Ch3_Ex7output.txt");//open output to write data to
	cout<<"Processing data"<<endl;
	
    indata>>last>>first>>old_salary>>percent_increase;
	new_salary = old_salary*percent_increase/100+old_salary;
	cout<<"\n"<<first<<" "<<last<<" "<<new_salary<<endl;
	outdata<<"\n"<<first<<" "<<last<<" "<<new_salary<<endl;
	
	indata>>last>>first>>old_salary>>percent_increase;

	new_salary = old_salary*percent_increase/100+old_salary;
	cout<<"\n"<<first<<" "<<last<<" "<<new_salary<<endl;
	outdata<<"\n"<<first<<" "<<last<<" "<<new_salary<<endl;
	
	indata>>last>>first>>old_salary>>percent_increase;
	
	new_salary = old_salary*percent_increase/100+old_salary;
	cout<<"\n"<<first<<" "<<last<<" "<<new_salary<<endl;
	outdata<<"\n"<<first<<" "<<last<<" "<<new_salary<<endl;

	indata.close();
	outdata.close();
	//End of Program
	system("pause");
	return 0;
}
