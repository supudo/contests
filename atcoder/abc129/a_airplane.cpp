// @supudo
// clang++ -O2 -Wall -std=c++14 atcoder_abc129_airplace.cpp -o ../build/atcoder_abc129_airplace -DLOCAL

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#define loop(var, from, to) for (int var=from; var<to; ++var)

using namespace std;

int main() {
  vector<int> times;
#ifdef LOCAL
  cout << "Enter A to B, B to C, C to A:" << endl;
#endif
  string line;
  getline(cin, line, '\n');
  stringstream nss(line);
  int number;
  vector<int> walks;
  while (nss >> number)
    times.push_back(number);
  cout << endl;

  int ab_bc = times[0] + times[1];
  int ab_ca = times[0] + times[2];
  int bc_ca = times[1] + times[2];

  cout << min(min(ab_bc, ab_ca), bc_ca) << endl;

  return 0;
}
