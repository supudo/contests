// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ../build/sol sol.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ../build/sol

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

  // brute
  int r = 20;
  while (r % 2 != 0 || r % 3 != 0 || r % 4 != 0 || r % 5 != 0 || r % 6 != 0 ||
        r % 7 != 0 || r % 8 != 0 || r % 9 != 0 || r % 10 != 0 || r % 11 != 0 ||
        r % 12 != 0 || r % 13 != 0 || r % 14 != 0 || r % 15 != 0 || r % 16 != 0 ||
        r % 17 != 0 || r % 18 != 0 || r % 19 != 0 || r % 20) {
    r += 20;
  }
  cout << r << '\n';

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
