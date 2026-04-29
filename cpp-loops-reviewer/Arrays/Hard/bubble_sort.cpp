#include <iostream>

using namespace std;

int main()
{
  int array[6] = {6, 1, 5, 2, 4, 3};
  int size = 6;

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  return 0;
}

