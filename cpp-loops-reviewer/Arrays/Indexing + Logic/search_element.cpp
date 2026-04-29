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

  cout << "\n";

  // Create variable for target value
  int target;

  cout << "Enter target value: ";
  cin >> target;

  int index = 0;

  // Use for loop to look for target index in the array
  for (int k = 0; k < 8; k++) {
    if (array[k] == target) {
      index = k;
    }
  }

  if (index == 0) {
    cout << "Not found";
  } else {
    cout << endl << "Element found at index: " << index;
  }

  return 0;
}
