// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/a a.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/a

#include <iostream>
#include <vector>
#include <bitset>

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

  int numberOfAirlines = 0;
  cin >> numberOfAirlines;

  int numberOfCountries = 0;
  cin >> numberOfCountries;
  const int numOfc = 50;

  bitset<numOfc> bsi[numOfc];
  bitset<numOfc> bso[numOfc];

  for (int i=0; i<numberOfAirlines; i++) {
    string s = "";
    cin >> s;
    bsi[i] = s == "Y" ? 1 : 0;
    // TODO: ...
  }

  for (int i=0; i<numberOfAirlines; i++) {
    string s = "";
    cin >> s;
    bso[i] = s == "Y" ? 1 : 0;
  }

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
