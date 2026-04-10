#include <iostream>

using namespace std;

int main()
{
  // Print a right triangle pattern using *

  // The outer loop serves as the loop for the rows
  int rows = 5;

  for (int i = 0; i < rows; i++) {
    // The inner loop serves as the loop for the column
    for (int j = 0; j <= i; j++) { // we set the condition j <= i since we want to print the asterisks based on the current index of rows
      // Now we print asterisk based on the index jclea
      cout << "*";
    }
    // to print the next line, we add an endl after the column of asterisk is printed
    cout << endl;
  }


  // The logic
  // the condition j <= i
  // since we used <=, the value of i even if j and i are the same will be valid since it is inclusive

  // output
  // * i = 0, j = 0; asterisk will be printed once
  // ** i = 1, j = 0; asterisk will be printed twice
  // *** i = 2, j = 0; asterisk will be printed thrice
  // **** i = 3, so on and so on
  // ***** i = 4

  return 0;
}

