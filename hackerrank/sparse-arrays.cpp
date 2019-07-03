// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/sparse-arrays sparse-arrays.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/sparse-arrays < sparse-arrays.in

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

  int n;
  string line;
  bool f = true, f2 = true;
  vs strings;
  vi queries;
  while (cin >> n) {
    for (int i=0; i<n; i++) {
      cin >> line;
      if (f)
        strings.push_back(line);
      else {
        if (f2) {
          for (int k=0; k<n; k++)
            queries.push_back(0);
          f2 = false;
        }
        for (size_t j=0; j<strings.size(); j++) {
          if (strings[j] == line)
            queries[i] += 1;
        }
      }
    }
    f = !f;
  }

  for (size_t i=0; i<queries.size(); i++)
    cout << queries[i] << '\n';

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
