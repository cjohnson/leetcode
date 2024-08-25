#include <iostream>
#include <string>

#include "Solution.h"

int main() {
  Solution solution;
  std::string input, actual, expected;

  input = "aacabdkacaa";
  actual = solution.longestPalindrome(input);
  expected = "aca";
  std::cout << "Test case 1\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  input = "cbbd";
  actual = solution.longestPalindrome(input);
  expected = "bb";
  std::cout << "Test case 2\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
}
