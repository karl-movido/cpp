#include <iostream>

using namespace std;

int main()
{
  int array[6] = {6, 1, 5, 2, 4, 3};
  int size = 6;

  int value = 2;

  for (int i = value; i < size; i++) {
    int temp = array[i];
    array[i] = array[i + 1];
    array[i + 1] = temp;
  }

  size--;

  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  return 0;
}

