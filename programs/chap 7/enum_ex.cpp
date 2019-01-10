// This is another example of using ENUM
// initilize subjects in various ways to show errors

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	enum courses {web1, web2, web3, cpp} subjects;
	enum colleges {qcc, wpi, worcester } applied;

    int in_val;

	subjects=static_cast<courses>(2);
	cout << subjects << endl;

    cout << "\nWhich college have you applied at: ";
    cin >> in_val;
    switch (in_val) {
      case 1: applied=qcc; break;
      case 2: applied=wpi; break;
      case 3: applied=worcester; break;
    } // end of switch

    switch (applied) {
      case qcc: cout << "\n*** Applied at QCC."; break;
      case wpi: cout << "\n*** Applied at WPI."; break;
      case worcester: cout << "\n*** Applied at Worcester."; break;
    }

    cout << "\nApplied = " << applied << endl;

 system("PAUSE");
 return 0;
}  //end of main
