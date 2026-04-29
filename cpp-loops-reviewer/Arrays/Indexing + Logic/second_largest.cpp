#include <iostream>

using namespace std;

int main() {
  int array[7];

  for (int i = 0; i < 7; i++) {
    cout << "Enter number: ";
    cin >> array[i];
  }

  int largest = array[0];
  int second = array[0];

  for (int j = 0; j < 7; j++) {
    if (array[j] > largest) {
      largest = array[j];
    }
  }

  for (int k = 0; k < 7; k++) {
    if (array[k] == largest) {
      continue;
    } else if (array[k] > second) {
      second = array[k];
    }
  }

  cout << endl << "Second largest value: " << second;
  return 0;
}
