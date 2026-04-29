#include <iostream>

using namespace std;

int main() {
  int size;

  cout << "Enter size: ";
  cin >> size;

  int array[size];

  for (int i = 0; i < size; i++) {
    cout << "Enter value: ";
    cin >> array[i];
  }

  bool isPalindrome = false;

  for (int j = 0; j < size / 2; j++) {
    if (array[j] == array[size - (j + 1)]) {
      isPalindrome = true;
    } else {
      isPalindrome = false;
      break;
    }
  }

  cout << endl;

  if (isPalindrome) {
    cout << "The array is a palindrome";
  } else {
    cout << "The array is not a palindrome";
  }

  return 0;
}
