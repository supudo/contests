// @supudo
// clang++ -O2 -Wall -std=c++14 atcoder_abc129_balance.cpp -o ../build/atcoder_abc129_balance -DLOCAL

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#define loop(var, from, to) for (int var=from; var<to; ++var)

using namespace std;

int main() {
  int elements;
  vector<int> times;
#ifdef LOCAL
  cout << "Enter number of elements:" << endl;
#endif
  cin >> elements;
  cin.ignore();

#ifdef LOCAL
  cout << "Enter weights:" << endl;
#endif
  string line;
  getline(cin, line, '\n');
  stringstream nss(line);
  int number;
  vector<int> weights;
  while (nss >> number)
    weights.push_back(number);
  cout << endl;

  int result = 99999999;
  for (int i=0; i<elements; i++) {
    int wsum1 = 0;
    int wsum2 = 0;
    for (int j=0; j<i; j++) {
      wsum1 += weights[j];
    }
    for (int j=i; j<elements; j++) {
      wsum2 += weights[j];
    }
    result = min(result, abs(wsum1 - wsum2));
  }

#ifdef LOCAL
  cout << "Final result:" << endl;
#endif
  cout << result << endl;

  return 0;
}
