#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
	
	string str = "Now is the time for the party!";
	 str.erase(16, 14);
	 str.insert(16, "to study for the exam?");
	 cout<<str<<endl;
	system("pause");
	return 0;
}
// p515 #18
