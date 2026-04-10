#include <iostream>

using namespace std;

int main()
{
  // Factorial

  // just like the adding the sum of numbers, we instead use * to get the factorial
  int n = 5; // n is the variable to store the factorial we want to get
  int total = 1; // the total serves as the final factorial

  for (int i = 1; i <= n; i++) {
    total *= i; // *= is a shorthand for total = total * i, meaning to multiply the value of total to i and store it as well within total
  }

  cout << total;
  return 0;
}

