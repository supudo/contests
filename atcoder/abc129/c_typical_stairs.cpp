// @supudo
// clang++ -O2 -Wall -std=c++14 -DLOCAL atcoder/abc129/c_typical_stairs.cpp -o ./build/atcoder_abc129_typical_stairs

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#define loop(var, from, to) for (int var=from; var<to; ++var)

using namespace std;

int main() {
  int total_steps, broken_steps;

#ifdef LOCAL
  cout << "Enter total steps and broken steps:" << endl;
#endif
  string line;
  getline(cin, line, '\n');
  stringstream nss(line);
  int number;
  vector<int> tsteps;
  while (nss >> number)
    tsteps.push_back(number);
  cout << endl;
  total_steps = tsteps[0];
  broken_steps = tsteps[1];

  vector<bool> all_steps(false, total_steps);
  vector<int> bad_steps;

#ifdef LOCAL
  cout << "Enter broken steps:" << endl;
#endif
  int s = -1;
  int c = 0;
  while (true) {
    cin >> s;
    bad_steps.push_back(s);
    all_steps[s - 1] = true;
    c += 1;
    if (c == broken_steps)
      break;
  }

#ifdef LOCAL
  cout << "Final result:" << endl;
#endif
  cout << total_steps << " " << broken_steps << endl;

  return 0;
}
