#include <iostream>

using namespace std;

int main() {
  // Ask user to input numbers
  int array[8];

  cout << "Enter 8 numbers:\n";

  // Use for loop to enter numbers
  for (int i = 0; i < 8; i++) {
    cin >> array[i];
  }

  // Create variable for counter
  int duplicate = 0;

  for (int i = 0; i < 8; i++) {

    // Check if number is seen before
    bool isDuplicate = false;
    for (int k = 0; k < i; k++) {
      if (array[i] == array[k]) {
        isDuplicate = true;
        break;
      }
    }

    // Continue if number is a duplicate
    if (isDuplicate) {
      continue;
    }

    // Check if number appears again
    for (int j = i + 1; j < 8; j++) {
      if (array[i] == array[j]) {
        duplicate++;
        break;
      }
    }

  }

  cout << endl << "Number of duplicate values: " << duplicate;

  return 0;
}
