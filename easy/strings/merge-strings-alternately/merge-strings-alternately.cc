#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    string ret = "";

    size_t i = 0, j = 0;
    // merge until one of the indices go out of bounds
    while (i < word1.size() && j < word2.size()) {
      ret += word1[i++];
      ret += word2[j++];
    }

    // Handle leftover if any
    if (i == word1.size() && j < word2.size()) {
      while (j < word2.size()) {
        ret += word2[j++];
      }
    } else if (i < word1.size() && j == word2.size()) {
      while (i < word1.size()) {
        ret += word1[i++];
      }
    }

    return ret;
  }
};

int main() {
  Solution solution;
  string word1 = "abc";
  string word2 = "pqr";

  cout << solution.mergeAlternately(word1, word2)
         << endl;                   

  return EXIT_SUCCESS;
}
