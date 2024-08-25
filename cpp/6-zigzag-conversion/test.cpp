#include <iostream>

#include "Solution.h"

int main() {
  Solution solution;

  std::string input, actual, expected;

  input = "PAYPALISHIRING";
  actual = solution.convert(input, 3);
  expected = "PAHNAPLSIIGYIR";
  std::cout << "Test case 1:\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  input = "PAYPALISHIRING";
  actual = solution.convert(input, 4);
  expected = "PINALSIGYAHRPI";
  std::cout << "Test case 2:\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";

  input = "A";
  actual = solution.convert(input, 1);
  expected = "A";
  std::cout << "Test case 3:\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
}
