// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/variable-sized-arrays variable-sized-arrays.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/variable-sized-arrays < variable-sized-arrays.in

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    vector<vector<int >> nums;
    for (int i=0; i<n; i++) {
      string line;
      getline(cin, line);
      if (line != "") {
        istringstream nss(line);
        int num;
        vector<int> r;
        while (nss >> num) r.push_back(num);
        nums.push_back(r);
      }
    }

    for (int i=0; i<q; i++) {
      int qi, qe;
      cin >> qi >> qe;
      cout << nums[qi][qe + 1] << endl;
    }

    return 0;
}


