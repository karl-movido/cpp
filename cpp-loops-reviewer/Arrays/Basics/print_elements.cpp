#include <iostream>

using namespace std;

int main() {
  // Create an array of integers
  int array[5] = {1, 4, 5, 2, 8};

  // Get the length of array
  int length = sizeof(array) / sizeof(array[0]);

  // Use for loop to iterate over array and print every element
  for (int i = 0; i < length; i++) {
    cout << array[i] << " ";
  }

  return 0;
}
