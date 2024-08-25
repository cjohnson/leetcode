#include "Solution.h"
#include <iostream>

int main() {
  Solution solution;

  std::vector<int> a, b;
  double actual, expected;

  a = {1, 3};
  b = {2};
  actual = solution.findMedianSortedArray(a, b);
  expected = 2;
  std::cout << "Test case 1\n";
  std::cout << "Actual:   " << actual << std::endl;
  std::cout << "Expected: " << expected << std::endl;

  a = {1, 2};
  b = {3, 4};
  actual = solution.findMedianSortedArray(a, b);
  expected = 2.5;
  std::cout << "Test case 2\n";
  std::cout << "Actual:   " << actual << std::endl;
  std::cout << "Expected: " << expected << std::endl;
}
