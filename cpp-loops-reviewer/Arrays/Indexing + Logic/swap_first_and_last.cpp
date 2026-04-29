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

  // Create a variable for temp
  int temp;

  // Swap the first and last values of the array
  temp = array[0];
  array[0] = array[size - 1];
  array[size - 1] = temp;

  // Print the array
  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }

  return 0;
}
