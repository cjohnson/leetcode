#include "Solution.h"
#include <iostream>

int main() {
  Solution solution;

  int actual, expected;

  actual = solution.isPalindrome(121);
  expected = true;
  std::cout << "Test case 1\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.isPalindrome(-121);
  expected = false;
  std::cout << "Test case 2\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.isPalindrome(10);
  expected = false;
  std::cout << "Test case 3\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
}
