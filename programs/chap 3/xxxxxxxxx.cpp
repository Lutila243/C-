

//this program is designed to calculate City A's growth and City B's growth untill A>B


#include <iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main()

{
	
	cout<<setprecision(2)
	<<setiosflags(ios::fixed)
	<<setiosflags(ios::showpoint);
	
	int studs, no_studs, test_in, tot=0, j;
	float avg, no_tests;
	
	cout<<"enter the number of the students in your class:";
	cin>> studs;
	
	for (no_studs=1; no_studs<=studs; no_studs++) {
		
		do{
			cout<<"\nProcessing student number: "<< no_studs;
			cout<<"\nEnter anumber between 1 and 5 inclusive";
			cin>>no_tests;
		} while ((no_tests < 1) || (no_tests >5));// end of checking for number of test
		for (j=1; j<=no_tests; j++)  {
			do {
				cout<<"\nEnter a test score";
				cin>> test_in;
			} while ((test_in<1) || (test_in > 100));
			tot= tot + test_in;
		} //end of processing scores for student
		avg= tot/no_tests;
		cout<< "\nThe average the student no." <<no_studs<<" is: "<<avg<<endl;
		tot=0;
	}//end of for
	system("PAUSE");
	return 0;
	
}//end of the program
