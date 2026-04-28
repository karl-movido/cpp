#include <iostream>

using namespace std;

int main()
{
  int num = 1234;
  int reversed = 0; // set initially to 0

  // use while loop
  while (num != 0) { // run while loop until num becomes 0
    int digit = num % 10; // dividing the num by 10 will provide the remainder which is stored on the variable digit. 1234 / 10 = 123.4; 4 is the remainder.
    reversed = reversed * 10 + digit; // multiply the reversed variable by 10, then add the digit.
    num /= 10; // since num is an integer, decimals are ignored. By multiplying num by 10, the decimal is removed. 1234 / 10 = 123.4; 4 is removed.
  }

  cout << reversed;
  // output
  // 4321

  return 0;
} 

