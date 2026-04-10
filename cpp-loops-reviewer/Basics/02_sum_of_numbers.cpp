#include <iostream>

using namespace std;

int main()
{
  // Print sum of numbers

  // Ask user for a number n
  int n = 0;

  cout << "Enter a number: ";
  cin >> n;

  // Create variable for the total
  int total = 0;

  // Print the sum from 1 to n
  // Use for loop
  for (int i = 1; i <= n; i++) {
    cout << total << " + " << i << " = " << total + i << endl;

    total += i; // total += i means that index will be added to the value of total
  }
  // output: Enter a number: 5
  //         0 + 1 = 1
  //         1 + 2 = 3
  //         3 + 3 = 6
  //         6 + 4 = 10
  //         10 + 5 = 15

  return 0;
}

