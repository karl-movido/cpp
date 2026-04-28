#include <iostream>

using namespace std;

int main() {
  // Create an array of integers
  int array[5] = {1, 4, 5, 2, 8};

  // Get the length of array
  int length = sizeof(array) / sizeof(array[0]);

  // create variable for total
  int total = 0;


  // use for loop to add all elements
  for (int i = 0; i < length; i++) {
    total += array[i];
  }

  cout << total;

  return 0;
}
