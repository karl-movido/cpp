#include <iostream>

using namespace std;

int main() {
  int array[6];
  int size = 6;

  for (int i = 0; i < size; i++) {
    cout << "Enter number: ";
    cin >> array[i];
  }

  int value;

  cout << "Enter value to remove: ";
  cin >> value;

  cout << endl;

  for (int k = 0; k < size; k++) {
    if (array[k] == value) {
      for (int j = k; j < size - 1; j++) {
        array[j] = array[j + 1];
      }
      size--;
      k--;
    }
  }

  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  return 0;
}
