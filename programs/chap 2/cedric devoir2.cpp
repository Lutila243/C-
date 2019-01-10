  #include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>

  using namespace std;
  int main()
  {
      int firstNum= 18;
      int secondNum =37;
      
      if (( secondNum % firstNum ==2) || (secondNum % firstNum == 3))
      {
            secondNum = 18;
            firstNum = 1;
}
       else
       {
            secondNum = 1;
            firstNum = 37;             
}
        cout<< firstNum <<" " << secondNum << endl;
      
      
      
      
      
	    
        system("pause");
         return 0;
}
