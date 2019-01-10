#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
/*----------------------------------------------------------------------------------------
	This program will ask the user to input his hourly pay rate.
	Then it will call culculate 5 weeks, 40 hours per week, of the users pay.
	After it will calculate your pay after taxes, school supplies, and clothes expenses.
	Finally it will calculate savings bonds bought by the user, 
	and  savings bonds bought by the users parents.
	Of course that will all be displayed in the output.
	
	Written by Vitor V. Peixoto
	Class: CIS 121
	Chapter 2
------------------------------------------------------------------------------------------*/
	
	const float WeekHours = 40, NumWeeks = 5, Tax = .14;
	float HourRate, Gross, Net, Clothes, Supplies, SavBond, ParentBond;
	
	cout << "What is your hourly wage? ";
	cin >> HourRate;
	cout << endl;
	
	Gross = HourRate * WeekHours * NumWeeks;
	Net = Gross - (Gross * Tax);
	Clothes = Net * .10;		// Did't know if you wanted to add const variables for .10, .01, .25, .50
	Supplies = Net * .01;
	SavBond = Net * .25;		// Didn't know if you wanted to calculate the bonds before
	ParentBond = SavBond * .50; // or after the the clothes and supplies expences.
	
	
	cout << "Your income before taxes is: " << Gross << endl;
	cout << "Your income after taxes is: " << Net << endl;
	cout << "The money you spent on clothes and other accessories is: " << Clothes << endl; 
	cout << "The money you spent on school supplies is: " << Supplies << endl;
	cout << "The money spent to buy savings bond is: " << SavBond << endl;
	cout << "The money your parents spent to buy savings bond is: " << ParentBond << endl;
	
	system("PAUSE");
	return 0;
}
