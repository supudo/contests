// @supudo
// g++ -O2 -std=gnu++14 -Wall -Wextra -Wfatal-errors -Wshadow -Wno-vla-extension -pedantic -o ./build/array-pairs array-pairs.cpp -DLOCALHOST -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC
// ./build/array-pairs < array-pairs.in
// 115365

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long solve(vector<int> arr) {
  int r = 0;
  uint n = arr.size();
  sort(arr.rbegin(), arr.rend(), greater<int>());
  for (uint i=0; i<(n - 1); i++) {
    int m = arr[i];
    for (uint j=(i+1); j<n; j++) {
      m = max(arr[j], m);
      //cout << "m = " << m << ", arr[" << i << "][" << j << "] = " << arr[i] << " * " << arr[j] << " = " << (arr[i] * arr[j])  << endl;
      if (arr[i] * arr[j] <= m)
        ++r;
    }
  }
  return r;
}

int main() {
  int arr_count;
  cin >> arr_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string arr_temp_temp;
  getline(cin, arr_temp_temp);
  vector<string> arr_temp = split_string(arr_temp_temp);
  vector<int> arr(arr_count);
  for (int i = 0; i < arr_count; i++) {
    int arr_item = stoi(arr_temp[i]);
    arr[i] = arr_item;
  }
  long result = solve(arr);
  cout << result << "\n";
  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) { return x == y and x == ' '; });
  input_string.erase(new_end, input_string.end());
  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }
  vector<string> splits;
  char delimiter = ' ';
  size_t i = 0;
  size_t pos = input_string.find(delimiter);
  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));
    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }
  splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
  return splits;
}
