#include <iostream>

using namespace std;

int main()
{
  // Print a pyramid pattern using *

  // The outer loop serves as the loop for the rows
  int rows = 5;

  for (int i = 1; i <= rows; i++) {
    // The first inner loop serves as the loop for spaces
    for (int j = rows; j > i; j--) { // for the spaces, we use the same logic for the inverted triangle. We start from 5, count down to i while being exclusive to form the base
      cout << " ";
    }
    // The second inner loop prints the asterisks
    for (int k = 1; k <= i * 2 - 1; k++) { // This time we set the condition to k <= i * 2 - 1. For example, the first index is 1, 1 * 2 - 1 = 1, for index 2, 2 * 2 - 1 = 3, and so on
      cout << "*";
    }

    // to print the next line, we add an endl after the column of asterisk is printed
    cout << endl;
  }

  // output
  //     *     j = 5, i = 1, prints 4 spaces | i = 1; i * 2 - 1 = 1 asterisk
  //    ***    j = 5, i = 2, prints 3 spaces | i = 2, 2 * 2 -1 = 3 asterisk
  //   *****   j = 5, j = 3, prints 2 spaces | i = 3, 3 * 2 - 1 = 5 asterisk
  //  *******
  // *********
  return 0;
}

