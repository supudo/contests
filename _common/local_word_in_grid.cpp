// @supudo
// clang++ -02 -Wall -std=c++14 local_word_in_grid.cpp -o ./build/local_word_in_grid
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool doSearch(int grid_dim, vector< vector<string> > grid, int row, int col, char letter, string word, int foundLetters);
bool searchForNextLetter(int grid_dim, vector< vector<string> > grid, int row, int col, char letter, string word, int foundLetters);

int main() {
  int grid_dim = 0;
  string searchWord;

  cout << "Enter grid dimension: ";
  cin >> grid_dim;

  vector< vector<string> > grid;
  int rowCounter = 0;
  int colCounter = 0;
  cout << "Enter letters:" << endl;
  while (rowCounter <= grid_dim) {
    string line;
    getline(cin, line);
    istringstream nss(line);
    string letter;
    vector<string> rowLetters;
    while (nss >> letter) rowLetters.push_back(letter);
    if (rowLetters.size() < grid_dim && line != "")
      cout << "Please, enter " << grid_dim << " letters!" << endl;
    else {
      grid.push_back(rowLetters);
      rowCounter += 1;
      colCounter += 1;
      if (colCounter == grid_dim) colCounter = 0;
    }
  }

  grid.erase(grid.begin(), grid.begin() + 1);

  cout << "Please, enter a word: " << endl;
  cin >> searchWord;

  // BEGIN SOLUTION

  bool found = doSearch(grid_dim, grid, 0, 0, '\0', searchWord, 0);

  // END SOLUTION

  // for (int i=0; i<grid.size(); i++) {
  //   for (int j=0; j<grid[i].size(); j++) {
  //     cout << "[" << grid[i][j] << "] ";
  //   }
  //   cout << endl;
  // }
  // cout << searchWord << endl;
  cout << (found ? "This word can be found." : "Word cannot be found.");

  return 0;
}

bool doSearch(int grid_dim, vector< vector<string> > grid, int row, int col, char letter, string word, int foundLetters) {
  for (int i = 0; i < grid_dim; i++) {
    for (int j = 0; j < grid_dim; j++) {
      if (searchForNextLetter(grid_dim, grid, i, j, grid[i][j][0], word, 0))
        return true;
    }
  }
  return false;
}

bool searchForNextLetter(int grid_dim, vector< vector<string> > grid, int row, int col, char letter, string word, int foundLetters) {
  if (foundLetters == word.length())
    return true;
  else if (row > grid_dim || col > grid_dim)
    return false;
  else
    return searchForNextLetter(grid_dim, grid, row, col - 1, letter, word, foundLetters) |
           searchForNextLetter(grid_dim, grid, row, col + 1, letter, word, foundLetters) |
           searchForNextLetter(grid_dim, grid, row - 1, col, letter, word, foundLetters) |
           searchForNextLetter(grid_dim, grid, row + 1, col, letter, word, foundLetters);
}
