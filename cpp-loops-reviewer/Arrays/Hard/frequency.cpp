#include <iostream>

using namespace std;

int main()
{
  int size;

  cout << "Enter size: ";
  cin >> size;

  int array[size];

  for (int i = 0; i < size; i++) {
    cout << "Enter number: ";
    cin >> array[i];
  }

  for (int i = 0; i < size; i++) {
    int count = 1;
    bool isDone = false;

    for (int j = 0; j < i; j++) {
      if (array[i] == array[j]) {
        isDone = true;
        break;
      }
    }

    if (isDone) {
      continue;
    }

    for (int k = i + 1; k < size; k++) {
      if (array[k] == array[i]) {
        count++;
      }
    }

    cout << array[i] << " -> " << count << endl;
  }

  return 0;
}

