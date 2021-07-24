// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -fsanitize=address -o ./build/merge_sorted_arrays merge_sorted_arrays.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/merge_sorted_arrays

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var = from; var < to; ++var)
#define forfrom(var, from, to) for (int var = from; var > to; --var)

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  int s = (int)nums1.size();
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j ++) {
      if (nums2[j] >= nums1[i]) {
        nums1[i + 1] = nums1[k];
        // TODO:
      }

      cout << "---> i = " << i << "; j = " << j << '\n';
      for (int nn : nums1)
        cout << nn << ", ";
      cout << '\n';

      nums1[m + c] = nums2[j];
      c++;
    }
  }
}

int main() { _

  vector<int> nums1 { 1, 2, 3, 0, 0, 0 };
  vector<int> nums2 { 2, 5, 6 };
  int m = 2;
  int n = 3;

  cout << "nums1: ";
  for (int nn : nums1)
    cout << nn << ", ";
  cout << '\n';

  cout << "nums2: ";
  for (int nn : nums2)
    cout << nn << ", ";
  cout << '\n';

  cout << "n = " << n << "; m = " << m << '\n';

  merge(nums1, m, nums2, n);

  cout << "RESULT: ";
  for (int nn : nums1)
    cout << nn << ", ";
  cout << '\n';

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC) << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
