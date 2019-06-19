// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/c c.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/c

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.precision(10);

  int s;
  cin >> s;
  cin.ignore();

  int scounter = 0;
  while (scounter < s) {
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<string> tokens;
    copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(tokens));
    for (size_t i=0; i<tokens.size(); i++) {
      string word = tokens[i];
      transform(word.begin(), word.end(), word.begin(), ::tolower);
      char fl = word.at(0);
      word = word.substr(1);
      word.push_back(fl);
      word.append("ay");
      if (i == 0)
        word[0] = toupper(word[0]);
      cout << word << " ";
    }
    cout << endl;
    scounter += 1;
  }

#ifdef LOCALHOST
  cout << "Time elapses:" << (1.0 * clock() / CLOCKS_PER_SEC)  << " secnds!" << endl;
  cout.flush();
#endif

  return 0;
}
