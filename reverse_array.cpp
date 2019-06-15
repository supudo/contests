// @supudo
// clang++ -O2 -Wall -std=c++14 -Wc++14-extensions -DLOCAL reverse_array.cpp -o ./build/reverse_array

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <ctime>

using namespace std;

int main() {
  int arrsize = 10;
  int arr[arrsize];

  srand(time(nullptr));

  cout << "Array: " << endl;
  for (int i=0; i<arrsize; i++) {
    arr[i] = (rand() % 10) + 1;
    cout << " " << arr[i];
  }
  cout << endl;

  int arrrev[arrsize];
  for (int i=arrsize-1, j=0; i>=0; i--, j++) {
    arrrev[j] = arr[i];
  }

  cout << "Reversed array: " << endl;
  for (int i=0; i<arrsize; i++) {
    cout << " " << arrrev[i];
  }
  cout << endl;

  return 0;
}
