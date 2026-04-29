#include <iostream>

using namespace std;

int main()
{
  int num = 1234;

  while (num != 0) {
    cout << num << endl;

    int temp = num;
    int divisor = 1;

    while (temp >= 10) {
      temp /= 10;
      divisor *= 10;
    }

    num = num % divisor;
  }

  return 0;
}

