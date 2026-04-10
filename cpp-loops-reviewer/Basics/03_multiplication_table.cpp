#include <iostream>

using namespace std;

int main()
{
  // Print multiplication table | similar to sum of numbers

  // Ask user for a number n
  int n = 0;

  cout << "Enter a number: ";
  cin >> n;

  // Use for loop
  for (int i = 1; i <= 10; i++) { // set the condition until 10 to print the multiplication table from 1 - 10
    cout << n << " x " << i << " = " << n * i << endl; // simple formatting; instead of adding, use * to multiply
  }
  // output
  // Enter a number: 5
  // 5 x 1 = 5
  // 5 x 2 = 10
  // 5 x 3 = 15
  // 5 x 4 = 20
  // 5 x 5 = 25
  // 5 x 6 = 30
  // 5 x 7 = 35
  // 5 x 8 = 40
  // 5 x 9 = 45
  // 5 x 10 = 50

  return 0;
}

