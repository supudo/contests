// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -fsanitize=address -o ./build/duplicate_zeroes duplicate_zeroes.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/duplicate_zeroes

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define _                      \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);            \
  cout.precision(10);
#define forto(var, from, to) for (int var = from; var < to; ++var)
#define forfrom(var, from, to) for (int var = from; var > to; --var)

using namespace std;

void duplicateZeros(vector<int>& arr) {
  int s = arr.size();
  for (int i = 0; i < s; i++) {
    if (i >= s)
      return;
    if (arr[i] == 0) {
      for (int j = s - 1; j > i; j--) {
        if (j + 1 < s)
          arr[j + 1] = arr[j];
      }
      if (i + 1 < s)
        arr[i + 1] = 0;
      i = i + 1;
    }
  }
}

int main() { _

  vector<int> nums { 1, 0, 2, 3, 0, 4, 5, 0, 9 };

  cout << "Before: ";
  for (int n : nums)
    cout << n << ", ";
  cout << '\n';

  duplicateZeros(nums);

  cout << "After: ";
  for (int n : nums)
    cout << n << ", ";
  cout << '\n';

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC) << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
