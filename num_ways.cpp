// @supudo
// clang++ -Wall -std=c++14 num_ways.cpp -o num_ways

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

using namespace std;

int calculateNumWays(int steps, int walks);
int calculateNumWays2(int steps, int walks);

int main() {
  int steps = 0;

  cout << "Enter N:" << endl;
  cin >> steps;
  cin.ignore();

  cout << "Enter allowed steps, separated by space:" << endl;
  string num_steps;
  getline(cin, num_steps, '\n');
  stringstream nss(num_steps);
  int number;
  vector<int> walks;
  while (nss >> number)
    walks.push_back(number);
  cout << endl;

  vector<vector<int>> num_ways;
  if (steps < 0)
    num_ways.push_back(vector<int>(1, 0));
  else if (steps == 0)
    num_ways.push_back(vector<int>(1, 1));

  cout << "Result:" << endl;
  if (steps < 0)
    return 0;
  if (steps == 0)
    return 1;
  else
    for (vector<int>::iterator it = walks.begin(); it != walks.end(); ++it)
      cout << "For " << steps << " steps and " << *it << " walks = " << calculateNumWays(steps + 1, *it) << endl;

  return 0;
}

int calculateNumWays(int steps, int walks) {
  if (steps <= 1) 
    return steps; 
  int res = 0; 
  for (int i = 1; i <= walks && i <= steps; i++) 
    res += calculateNumWays2(steps - i, walks); 
  return res; 
}

int calculateNumWays2(int steps, int walks) {
  int res[steps]; 
  res[0] = 1;
  res[1] = 1; 
  for (int i = 2; i < steps; i++) { 
    res[i] = 0; 
    for (int j = 1; j <= walks && j <= i; j++) 
      res[i] += res[i - j]; 
  } 
  return res[steps - 1];
}