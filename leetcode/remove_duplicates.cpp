// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/remove_duplicates remove_duplicates.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/remove_duplicates

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

int removeDuplicates(vector<int>& nums) {
  int n = nums.size();
  if (n == 0 || n == 1)
    return n;
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (i < n - 1 && nums[i] == nums[i + 1])
      continue;
    nums[j++] = nums[i];
  }
  return j;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.precision(10);

  std::vector<int> nums {0,0,1,1,1,2,2,3,3,4};
  int len = removeDuplicates(nums);
  for (int i = 0; i < len; i++) {
    std::cout <<  nums[i] << '\n';
  }

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
