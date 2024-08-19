#include "Solution.h"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &vec) {
  os << "[ ";
  for (size_t i = 0; i < vec.size(); ++i) {
    if (i > 0) {
      os << ", ";
    }
    os << vec[i];
  }
  os << " ]";
  return os;
}

int main() {
  Solution solution;
  std::vector<int> vec, expected, actual;

  vec = {2, 7, 11, 15};
  actual = solution.twoSum(vec, 9);
  expected = {0, 1};
  std::cout << "Test case 1\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  vec = {3, 2, 4};
  actual = solution.twoSum(vec, 6);
  expected = {1, 2};
  std::cout << "Test case 2\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  vec = {3, 3};
  actual = solution.twoSum(vec, 6);
  expected = {0, 1};
  std::cout << "Test case 3\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
}
