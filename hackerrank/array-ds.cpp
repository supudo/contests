// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/array-ds array-ds.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/array-ds

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.precision(10);

  int n;
  cin >> n;
  cin.ignore();

  int number;
  int nums[n];
  int c = n;
  while (c > 0) {
    cin >> number;
    nums[c - 1] = number;
    c -= 1;
  }

#ifdef LOCALHOST
  cout << "Input array: " << endl;
  for (int i=0; i<n; ++i) {
    cout << " " << nums[i];
  }
  cout << endl;
#endif

  auto p1 = &nums[0];
  auto p2 = &nums[n - 1];
  int temp = 0;
  while (p1 >= p2) {
    temp = *p1;
    *p1++ = *p2;
    *p2-- = temp;
  }

#ifdef LOCALHOST
  cout << "Reversed array: " << endl;
#endif
  for (int i=0; i<n; ++i) {
    cout << nums[i] << (i == n - 1 ? "" : " ");
  }
  cout << endl;

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
