#include <iostream>

#include "Solution.h"

int main() {
  Solution solution;

  int actual, expected;

  actual = solution.reverse(123);
  expected = 321;
  std::cout << "Test case 1\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.reverse(-123);
  expected = -321;
  std::cout << "Test case 2\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.reverse(120);
  expected = 21;
  std::cout << "Test case 3\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  actual = solution.reverse(1534236469);
  expected = 0;
  std::cout << "Test case 4\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
}
