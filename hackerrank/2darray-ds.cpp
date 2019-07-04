// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/2darray-ds 2darray-ds.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/array-ds
// https://www.hackerrank.com/challenges/2d-array/problem?h_r=next-challenge&h_v=zen
// https://www.geeksforgeeks.org/maximum-sum-hour-glass-matrix/

#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);
#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

using namespace std;

int main() { _
  int arr[6][6];
  int number;
  int rc = 0, cc = 0;
  while (cin >> number) {
    arr[rc][cc] = number;
    cc += 1;
  }

  int res = -100000000000000;
  for (int r=1; r<=4; r++) {
    for (int c=1; c<=4; c++) {
      int m = arr[r][c] + arr[r-1][c-1] + arr[r-1][c] + arr[r-1][c+1]
                        + arr[r+1][c-1] + arr[r+1][c] + arr[r+1][c+1];
      res = max(res, m);
    }
  }

  cout << res;

// #ifdef LOCALHOST
//   cout << "Input matrix: " << endl;
//   for (int i=0; i<6; ++i) {
//     for (int j=0; j<6; ++j)
//       cout << arr[i][j] << " ";
//     cout << endl;
//   }
//   cout << endl;
// #endif

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " seconds!" << endl;
  cout.flush();
#endif

  return 0;
}
