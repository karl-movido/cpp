#include <iostream>

using namespace std;

int main() {
  int size1;

  cout << "Enter size of first array: ";
  cin >> size1;

  int array1[size1];

  for (int i = 0; i < size1; i++) {
    cout << "Enter value [" << i << "]: ";
    cin >> array1[i];
  }


  int size2;

  cout << "Enter size of second array: ";
  cin >> size2;

  int array2[size2];

  for (int i = 0; i < size2; i++) {
    cout << "Enter value [" << i << "]: ";
    cin >> array2[i];
  }


  for (int j = 0; j < size1; j++) {
    cout << array1[j] << " ";
  }
  for (int j = 0; j < size2; j++) {
    cout << array2[j] << " ";
  }


  return 0;
}
