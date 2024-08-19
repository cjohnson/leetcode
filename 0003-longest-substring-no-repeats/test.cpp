#include <iostream>

#include "Solution.h"

int main() {
  Solution solution;

  std::string s;
  int actual, expected;

  s = "abcabcbb";
  actual = solution.lengthOfLongestSubstring(s);
  expected = 3;
  std::cout << "Test case 1\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  s = "bbbbb";
  actual = solution.lengthOfLongestSubstring(s);
  expected = 1;
  std::cout << "Test case 2\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  s = "pwwkew";
  actual = solution.lengthOfLongestSubstring(s);
  expected = 3;
  std::cout << "Test case 3\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  s = " ";
  actual = solution.lengthOfLongestSubstring(s);
  expected = 1;
  std::cout << "Test case 4\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  s = "abba";
  actual = solution.lengthOfLongestSubstring(s);
  expected = 2;
  std::cout << "Test case 5\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';
}

