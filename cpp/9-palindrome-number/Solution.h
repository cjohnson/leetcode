#include <cassert>

class Solution {
public:
    bool isPalindrome(int x);
};

inline bool Solution::isPalindrome(const int x) {
  assert(-2e31 <= x && x <= (2e31 - 1));

  if (x == 0) return true;
  if (x < 0)  return false;

  unsigned int forward = x;
  unsigned int reversed = 0;
  unsigned int digit;

  digit = forward % 10;
  forward -= digit;
  reversed += digit;
  while (forward > 0) {
    forward /= 10;
    reversed *= 10;

    digit = forward % 10;
    forward -= digit;
    reversed += digit;
  }
  return reversed == x;
}
