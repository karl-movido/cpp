#include <iostream>

using namespace std;

int main()
{
  // Print a inverted right triangle pattern using *

  // The outer loop serves as the loop for the rows
  int rows = 5;

  for (int i = 0; i < rows; i++) {
    // The inner loop serves as the loop for the column
    for (int j = rows; j > i; j--) { // this time we set the j index as the rows, we have to count down from 5 to the value of i which increases per line. j-- means to decrease by 1
      // Now we print asterisk based on the index j
      cout << "*";
    }
    // to print the next line, we add an endl after the column of asterisk is printed
    cout << endl;
  }


  // The logic
  // the condition j > i
  // since rows = 5, the inner for loop always starts at 5


  // output
  // ***** i = 0, j = 5; counts down until j reaches 1, since 0 is exclusive
  // **** i = 1, j = 5; counts down to 2
  // *** i = 2, j = 5; counts down to 3
  // ** i = 3, j = 5; so on and so on
  // * i = 4

  return 0;
}

