#include <iostream>

using namespace std;

int main()
{
  // Prime numbers
  // Only divisible by itself and one

  int n = 51; // variable for the number to check
  bool isPrime = false;

  for (int i = 2; i < n; i++) {
    // we set the i to 2, since all numbers are already divisible by itself and 1,
    // we just need to check if it is divisible by the numbers between them.

    if (n % i != 0) {
      // if (n % i) is not equal to 0, meaning it has a remainder and it is not divisible by that index.
      // So we set isPrime to true and we skip that index.

      isPrime = true;
      continue;

    } else {

      // if n happens to be divisible by the current index, then we immediately output that it is not a prime number.
      // We set the isPrime to false, and break the loop.

      cout << n << " is not a prime number";
      isPrime = false;
      break;
    }
  }

  if (isPrime) {
    // If it isPrime is true, then we output that n is a prime number
    cout << n << " is a prime number";
  }
  return 0;
}

