#include <iostream>

using namespace std;

int main() {
  // Create variable to store size of array according to user
  int size;

  cout << "Enter preferred array size: ";
  cin >> size;

  // Create array using the variable size
  int array[size];

  // Use for loop to assign the elements for the array according to user
  for (int i = 0; i < size; i++) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> array[i];
  }

  // Use another for loop to print the elements
  for (int k = 0; k < size; k++) {
    cout << array[k] << " ";
  }

  cout << endl;

  // Print elements in reverse
  for (int j = size - 1; j >= 0; j--) { // size - 1 because the index starts with 0
    cout << array[j] << " ";
  }

  return 0;
}
