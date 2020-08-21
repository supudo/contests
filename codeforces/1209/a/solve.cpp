// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/solve solve.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/solve < solve.in

#include <bits/stdc++.h>

using namespace std;

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<lli> vlli;
typedef vector<string> vs;

int main() { _
  freopen("solve.in", "r", stdin);

  int n;
  cin >> n;
  vi nums(n);
  forto(i, 0, n)
    cin >> nums[i];
  sort(nums.begin(), nums.end());

  int res = 0;
  vi nums2(n);
  forto(i, 0, n) {
    if (nums2[i])
      continue;
    forto(j, 0, n)
      nums2[j] = nums2[j] || (nums[j] % nums[i] == 0);
    res += 1;
  }

  cout << res;

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
