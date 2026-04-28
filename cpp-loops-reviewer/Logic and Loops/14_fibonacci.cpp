#include <iostream>

using namespace std;

int main()
{
  // Fibonacci Sequence

  int n = 6; // n defines the number of terms to print
  int one = 0;
  int two = 0;

  for (int i = 0; i < n; i++) {
    two = i;
    int next = one + two;
    cout << next << " ";
  }
  return 0;
}

