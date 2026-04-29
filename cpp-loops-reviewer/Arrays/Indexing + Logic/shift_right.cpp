#include <iostream>

using namespace std;

int main() {
  int array[6];

  for (int i = 0; i < 6; i++) {
    cout << "Enter number: ";
    cin >> array[i];
  }


  for (int j = 1; j <= 5; j++) {
    int temp = array[j];
    array[j] = array[0];
    array[0] = temp;
  }

  for (int k = 0; k < 6; k++) {
    cout << array[k] << " ";
  }

  return 0;
}
