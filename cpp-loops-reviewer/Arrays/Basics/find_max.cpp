#include <iostream>

using namespace std;

int main() {
  // Create an array of integers
  int array[5] = {2, 4, 5, 6, 12};

  // Get the length of array
  int length = sizeof(array) / sizeof(array[0]);

  // Create variable for largest number
  int largest = array[0]; // assign it on the first index

  // Use for loop to compare the elements to the largest
  for (int i = 0; i < length; i++) {
    // Establish logic
    if (array[i] > largest) {
      largest = array[i];
    }
  }

  cout << "Largest: " << largest;

  return 0;
}
