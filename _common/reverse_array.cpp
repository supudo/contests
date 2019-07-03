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

  // int arrrev[arrsize];
  // for (int i=arrsize-1, j=0; i>=0; i--, j++) {
  //   arrrev[j] = arr[i];
  // }

  // cout << "Reversed array: " << endl;
  // for (int i=0; i<arrsize; i++) {
  //   cout << " " << arrrev[i];
  // }
  // cout << endl;

  auto p1 = &arr[0];
  auto p2 = &arr[arrsize -1];
  auto temp = 0;
  while (p1 >= p2) {
    temp = *p1;
    *p1++ = *p2;
    *p2-- = temp;
  }

#ifdef LOCAL
  cout << "Reversed array: " << endl;
#endif
  for (int i=0; i<arrsize; i++) {
    cout << " " << arr[i];
  }
  cout << endl;

  return 0;
}
