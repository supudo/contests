// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/b b.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/b

#include <iostream>
#include <vector>

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
  int n, q;
  cin >> n >> q;

  string s;
  for (int i=0; i<n; i++) s += (char)('A' + i);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      cout << "? " << s[j] << " " << s[j + 1] << '\n';
      char ans;
      cin >> ans;
      if (ans == '>') swap(s[j], s[j + 1]);
      cout << "i = " << i << ", j = " << j << endl;
    }
  }

  cout << "! " << s << '\n';

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
