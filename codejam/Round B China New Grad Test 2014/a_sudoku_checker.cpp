// @supudo
// clang++ -O2 -Wall -std=c++14 a_sudoku_checker.cpp -o ./build/a_sudoku_checker -DLOCAL
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/a_sudoku_checker a_sudoku_checker.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/a_sudoku_checker

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

#define forto(var, from, to) for (int var=from; var<to; ++var)
#define forfrom(var, from, to) for (int var=from; var>to; --var)

struct TestCase {
  int dim;
  bool valid;
  vector< vector< int > > data;
};

void checkSudoku(TestCase);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.precision(10);

  int test_cases;

  cin >> test_cases;
  cin.ignore();

  TestCase testcases[test_cases];
  int tc_counter = 0;
  while (tc_counter < test_cases) {
    TestCase tc;
    tc.valid = false;
    cin >> tc.dim;
    cin.ignore();

    int rowCounter = 0;
    while (rowCounter < (tc.dim * tc.dim)) {
      string line;
      getline(cin, line);
      if (line != "") {
        istringstream nss(line);
        int num;
        vector<int> rowNumbers;
        while (nss >> num) rowNumbers.push_back(num);
        tc.data.push_back(rowNumbers);
        rowCounter += 1;
      }
    }
    testcases[tc_counter] = tc;
    tc_counter += 1;
  }

#ifdef LOCALHOST
  cout << "Test cases = " << test_cases << endl;
  for (int i=0; i<test_cases; i++) {
    TestCase tc = testcases[i];
    cout << "Text case " << i << " with dimension = " << (tc.dim * tc.dim) << " : " << endl;
    for (vector< vector<int> >::iterator it = tc.data.begin(); it != tc.data.end(); ++it) {
      for (int c=0; c<(tc.dim * tc.dim); c++) {
        cout << (*it).at(c) << " ";
      }
      cout << endl;
    }
    cout << endl << endl;
  }
#endif

// BEGIN SOLUTION

for (int i=0; i<test_cases; i++) {
  checkSudoku(testcases[i]);
}

// END SOLUTION

#ifdef LOCALHOST
  cout << "Final results" << endl;
#endif
  for (int i=0; i<test_cases; i++) {
    cout << "Case #" << (i + 1) << ": " << (testcases[i].valid ? "Yes" : "No") << endl;
  }


#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " secnds!" << endl;
  cout.flush();
#endif

  return 0;
}

void checkSudoku(TestCase tc) {
  for (vector< vector<int> >::iterator it = tc.data.begin(); it != tc.data.end(); ++it) {
    for (int c=0; c<(tc.dim * tc.dim); c++) {
    }
  }
  tc.valid = false;
}
