#include <iostream>
#include <cmath>          //Headerfiles inclusion

using namespace std;

int octalToDecimal(int octalNumber);

int main()

{
   int octalNumber;              // Variable declaration
   
  cout<<"Enter an octal number: ";
   cin >> octalNumber;           //Inputting
   cout << octalNumber << " in octal = " << octalToDecimal(octalNumber) << " in decimal";
   
   return 0;
}

                                       
                                       // Now here is the function to convert octal number to decimal number.
int octalToDecimal(int octalNumber)
  
 {
    int decimalNumber = 0, i = 0, rem;
  
    while (octalNumber != 0)           // Conditional statement
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        
      ++i;                  // Pre increment
    }
  
    return decimalNumber;
}
