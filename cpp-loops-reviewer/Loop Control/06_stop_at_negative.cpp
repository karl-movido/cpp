#include <iostream>

using namespace std;

int main()
{
  // Keep asking user for a number and stop until user inputs a negative number

  // For repeating prompts, use while loops
  // crate a variable for n
  int n = 0;

  // use a while loop to check whether the number is negative
  while (true) { // while true, meaning as long as the condition is true, it will run forever
    cout << "Enter a number: ";
    cin >> n;

    // check if the number entered by user is negative
    if (n < 0) {
      break; // break is used to stop the loop. Once user enters a negative number, the loop will be terminated
    }
  }

  return 0;
}

