#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>

// #define TRIVIAL
#define MODULO

class Solution {
public:
  // https://leetcode.com/problems/reverse-integer/description/
  int reverse(int x);
};

#ifdef TRIVIAL
inline int Solution::reverse(int x) {
  if (x == 0 || x == INT_MIN) {
    return 0;
  }
  if (x < 0) {
    int result = reverse(-x);
    if (result == 0) {
      return 0;
    }
    return -result;
  }

  std::stringstream ss;
  ss << x;
  std::string result_string = ss.str();
  std::reverse(result_string.begin(), result_string.end());
  try {
    return std::stoi(result_string, 0, 10);
  } catch (...) {
    return 0;
  }
}
#endif // TRIVIAL

#ifdef MODULO
inline int Solution::reverse(int x) {
  if (x == INT_MIN) {
    return 0;
  }
  if (x < 0) {
    return -reverse(-x);
  }

  long result = 0;
  while (x > 0) {
    result *= 10;
    result += x % 10;
    x /= 10;
  }
  if (result > INT_MAX || result < INT_MIN) {
    return 0;
  }

  return (int)result;
}
#endif // MODULO
