// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/abc137_c abc137_c.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/abc137_c

#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;
#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.precision(10);

bool areAnagrams(string w1, string w2) {
  sort(w1.begin(), w1.end());
  sort(w2.begin(), w2.end());
  if (w1.length() != w2.length())
    return false;
  for (unsigned long j = 0; j < w1.length(); j++)
    if (w1[j] != w2[j])
      return false;
  return true;
}

int main() { _
  int n;
  cin >> n;
  cin.ignore();

  int r = 0;

  map<string> words;
  for (int i = 0; i < n; i++) {
    string word;
    getline(cin, word);
    words.push_back(word);
    for (int j = i - 1; j >= 0; j--) {
      if (areAnagrams(word, words[j]))
        r += 1;
    }
  }

  cout << r;

  return 0;
}
