#include <climits>
#include <string>

class Solution {
public:
  int myAtoi(std::string s);
};

inline int Solution::myAtoi(std::string string) {
  if (string.empty()) {
    return 0;
  }

  int index = 0;
  while (string[index] == ' ') {
    ++index;
    if (index >= string.size()) {
      return 0;
    }
  }

  bool is_negative = false;
  if (string[index] == '+') {
    ++index;
  } else if (string[index] == '-') {
    is_negative = true;
    ++index;
  }

  long result = 0;
  while (index < string.size() && isdigit(string[index])) {
    result *= 10;
    result += string[index] - '0';

    if (result > (long)INT_MAX) {
      return is_negative ? INT_MIN : INT_MAX;
    }
    ++index;
  }
  return is_negative ? (int)(-result) : (int)result;
}
