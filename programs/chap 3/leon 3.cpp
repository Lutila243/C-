
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
	
	
 
float percent_increased, new_sal, old_sal;

 string firstname, lastname;
 	
	ifstream indata;
	ofstream outdata;
	
	outdata << fixed << showpoint << setprecision(2);
	
    indata.open("Ch3_Ex6Data.txt"); // open input
	outdata.open("Ch3_Ex6Output.txt"); // open output to write data
	cout<<"Processing data"<<endl;
	
    indata>>lastname>>firstname>>old_sal>>percent_increased;
	new_sal = old_sal*percent_increased + old_sal;
	cout<<"\n"<<firstname<<" "<<lastname<<" "<<new_sal<<endl;
	outdata<<"\n"<<firstname<<" "<<lastname<<" "<<new_sal<<endl;
	
	indata>>lastname>>firstname>>old_sal>>percent_increased;

	new_sal = old_sal*percent_increased + old_sal;
	cout<<"\n"<<firstname<<" "<<lastname<<" "<<new_sal<<endl;
	outdata<<"\n"<<firstname<<" "<<lastname<<" "<<new_sal<<endl;
	
	indata>>lastname>>firstname>>old_sal>>percent_increased;
	
	new_sal = old_sal*percent_increased + old_sal;
	cout<<"\n"<<firstname<<" "<<lastname<<" "<<new_sal<<endl;
	outdata<<"\n"<<firstname<<" "<<lastname<<" "<<new_sal<<endl;

	indata.close();
	outdata.close();
	//End of Program
	system("pause");
	return 0;
}
