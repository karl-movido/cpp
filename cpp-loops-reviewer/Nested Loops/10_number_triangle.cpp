#include <iostream>

using namespace std;

int main()
{
  // Print a number triangle pattern using *

  // The outer loop serves as the loop for the rows
  int rows = 5;

  for (int i = 1; i <= rows; i++) {
    // The inner loop serves as the loop for the column
    for (int j = 1; j <= i; j++) { // we set the j to 1 so it can start on 1
      // Now we print asterisk based on the index jclea
      cout << j; // instead of printing asterisks, we print j
    }
    // to print the next line, we add an endl after the column of asterisk is printed
    cout << endl;
  }


  // The logic
  // the condition j <= i
  // since we used <=, the value of i even if j and i are the same will be valid since it is inclusive

  // output
  // 1
  // 12
  // 123
  // 1234
  // 12345

  return 0;
}

