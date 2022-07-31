

// * References:

 // tutorialspoint.com/csplusplus/cpp_for_loop.htm

//tutorialspoint.com/csplusplus/cpp_break_statement.htm

// http://sciencing.com/prime-numbers-6786745.html

#include <iostream>
#include <cmath>
#include <climits>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{

 unsigned int num,d, i;
 while ( cin >> num) {   //while numbers are being inputted


   d = 1;        //arbitrary integer d is set to 1


  for ( i = 1; i <= sqrt(num); i++) {  //sqrt method of finding out prime numbers. You keep dividing from 2 to the sqrt of the number inputted.


   if ( ((num % i == 0) && (i != 1 )) || (num == 1) ) {

       d = 0;       // You cannot divide by 1 because everything is divisible by one so you have to exclude it.
    // if for any number inputted the values of i do not spit out any remainder then reassign d to be 0 and stop the loop (break) if such a divisor is found.
        break;

   }


   }



cout << d << endl;  // important that this is inside the while loop instead of the for loop. program would not do what its supposed to if it was in the for loop.
  }



           return 0;
          }





