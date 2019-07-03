// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/left-rotation left-rotation.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/left-rotation < left-rotation.in

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

int main() { _

  int n, d;
  cin >> n >> d;

  vlli nums;
  int nn = n;
  while (nn > 0) {
    int sn;
    cin >> sn;
    nums.push_back(sn);
    nn -= 1;
  }

  rotate(nums.begin(), nums.begin() + d, nums.end());

  for (int i=0; i<n; i++) {
    cout << nums[i] << " ";
  }

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
