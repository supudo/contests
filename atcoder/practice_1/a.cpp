// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/a a.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/a

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
  int a=0, b=0, c=0;
  string s;

  cin >> a;
  cin.ignore();
  cin >> b >> c;
  cin.ignore();

  getline(cin, s);

  cout << (a + b + c)  << " " << s << endl;

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << '\n';
#endif

  return 0;
}
