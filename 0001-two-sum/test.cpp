#include "Solution.h"

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
  os << "{ ";
  for (const T element : vec) {
    os << element << " ";
  }
  os << "}";
  return os;
}

int main() {
  Solution solution;
  std::vector<int> vec, res;

  vec = { 2, 7, 11, 15 };
  res = solution.twoSum(vec, 9);
  std::cout << "Test case 1\n";
  std::cout << res << "\n";

  vec = { 3, 2, 4 };
  res = solution.twoSum(vec, 6);
  std::cout << "Test case 2\n";
  std::cout << res << "\n";

  vec = { 3, 3 };
  res = solution.twoSum(vec, 6);
  std::cout << "Test case 3\n";
  std::cout << res << "\n";
}
