#include <iostream>

using namespace std;

int main()
{
  // Print numbers 1 - 10

  for (int i = 1; i <= 10; i++) // Start index at 1; Use <= to make 10 inclusive
  {
    cout << i << " "; // print index and add " " for space
  }
  // output: 1 2 3 4 5 6 7 8 9 10

  cout << endl << endl;

  // Print only even numbers (1 - 20)
  for (int i = 1; i <= 20; i++) // Start index at 1; Use <= to make 20 inclusive
  {
    // if statement to check if index is even or odd
    if(i % 2 == 0) { // use % (modulus) to get the remainder; if remainder returns 1 (odd), if 0 (even)
      cout << i << " ";
    }
  }
  // output: 2 4 6 8 10 12 14 16 18 20

  cout << endl << endl;

  // Using while loop
  // create a variable for counter (same as index)
  int counter = 1;

  // use while to check WHILE counter is less than or equal to (<=) 10
  // the while loop will run until counter reaches the desired number
  while (counter <= 10) {
    // Print counter
    cout << counter << " ";

    // Increase counter by 1
    // counter = counter + 1; this is the long version
    counter++; // this is the shorthand version
  }
  // output: 1 2 3 4 5 6 7 8 9 10

  return 0;
}

