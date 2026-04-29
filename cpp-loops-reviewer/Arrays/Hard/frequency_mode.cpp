#include <iostream>

using namespace std;

int main()
{
  int array[6] = {1, 1, 1, 1, 1, 1};
  int size = 6;

  bool allSame = true;
  for (int i = 1; i < size; i++) {
    if (array[i] != array[0]) {
      allSame = false;
      break;
    }
  }

  if (allSame) {
    cout << "No unique identifier";
    return 0;
  }

  int highestFreq = 0;
  int mostFreqNum = -1;
  int numOfModes = 0;

  for (int i = 0; i < size; i++) {
    int count = 0;

    for (int j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        count++;
      }
    }

    if (count > highestFreq) {
      highestFreq = count;
      mostFreqNum = array[i];
      numOfModes = 1;
    } else if (count == highestFreq && array[i] != mostFreqNum) {
      numOfModes++;
    }
  }

  if (numOfModes > 1) {
    cout << "No unique identifier";
  } else {
    cout << "Most frequent number: " << mostFreqNum << endl;
    cout << "How many times it appeared: " << highestFreq;
  }


  return 0;
}

