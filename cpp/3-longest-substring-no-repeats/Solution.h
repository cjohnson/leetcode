#pragma once

#include <cassert>
#include <cmath>
#include <string>
#include <unordered_map>

#define UNORDERED_MAP

class Solution {
public:
  int lengthOfLongestSubstring(std::string s);
};

#ifdef UNORDERED_MAP
inline int Solution::lengthOfLongestSubstring(std::string s) {
  assert(0 <= s.length() && s.length() <= 5 * pow(10, 4));

  std::unordered_map<char, int> map;
  int longest_length = 0;
  int substring_start = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (map.find(s[i]) != map.end()) {
      int next_substring_start = map[s[i]] + 1;
      if (next_substring_start > substring_start) {
        substring_start = next_substring_start;
      }
    }
    map[s[i]] = i;

    const int length = 1 + (i - substring_start);
    if (length > longest_length) {
      longest_length = length;
    }
  }

  return longest_length;
}
#endif // UNORDERED_MAP
