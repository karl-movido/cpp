#include <iostream>

using namespace std;

int main()
{
  // skip multiples of 3 and print the rest

  for (int i = 1; i <= 10; i++) {
    // set an if statement to check if index is a multiple of 3
    // use % (modulus) to get the remainder

    if (i % 3 == 0) {
      continue; // continue works as a skip. it basically ignores the current index if it is a multiple of 3 and proceeds to the next index
    } else {
      cout << i << " "; // print index
    }
  }
  // output: 1 2 4 5 7 8 10
  return 0;
}

