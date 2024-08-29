#include "Solution.h"
#include <iostream>

int main() {
  Solution solution;

  int actual, expected;

  actual = solution.myAtoi("42");
  expected = 42;
  std::cout << "Test case 1\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.myAtoi("   -042");
  expected = -42;
  std::cout << "Test case 2\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.myAtoi("1337c0d3");
  expected = 1337;
  std::cout << "Test case 3\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.myAtoi("0-1");
  expected = 0;
  std::cout << "Test case 4\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.myAtoi("words and 987");
  expected = 0;
  std::cout << "Test case 5\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.myAtoi("+-12");
  expected = 0;
  std::cout << "Test case 6\n";
  std::cout << "Actual: " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
}
