#include <iostream>

using namespace std;

int main()
{
  // Print a square pattern using *

  // The outer loop serves as the loop for the rows
  int rows = 5; // We set the rows 5 for example

  for (int i = 0; i < rows; i++) {
    // The inner loop serves as the loop for the column
    for (int j = 0; j < rows; j++) { // we set the condition to rows as well to create a square
      // Now we print asterisk based on the index j
      // since j = 0 and rows = 5; the asterisk will be printed 5 times until j reaches below rows (j < rows)
      cout << "*";
    }
    // to print the next line, we add an endl after the column of asterisk is printed
    cout << endl;
  }


  // The logic
  // for int = 0 (first line), we run the inner for loop to print the asterisk
  // once the inner for loop is done printing, we add another line (cout << endl)
  // i increases by 1 as we add lines
  // with i = 1, the inner for loop will run again to print the column of asterisks
  // the loop continues until i reaches below rows

  // output
  // ***** i = 0
  // ***** i = 1
  // ***** i = 2
  // ***** i = 3
  // ***** i = 4; 5 is exclusive since we used <

  return 0;
}

