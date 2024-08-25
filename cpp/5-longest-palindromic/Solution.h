#include <iostream>
#include <string>
#include <vector>

#define TRIVIAL

class Solution {
public:
  // https://leetcode.com/problems/longest-palindromic-substring/description/
  std::string longestPalindrome(std::string string);
};

#ifdef TRIVIAL
inline std::string Solution::longestPalindrome(const std::string string) {
  const int string_size = string.size();
  int solution_index = 0;
  int solution_length = 0;

  std::vector<int> palindrome_extension_size(string_size, 0);
  for (int i = 0; i < string_size; ++i) {
    int left_index = i - palindrome_extension_size[i];
    int right_index = i + palindrome_extension_size[i];
    while (left_index >= 0 && right_index < string_size && string[left_index] == string[right_index]) {
      ++palindrome_extension_size[i];

      left_index = i - palindrome_extension_size[i];
      right_index = i + palindrome_extension_size[i];
    }

    const int palindrome_length = 2 * (palindrome_extension_size[i] - 1) + 1;
    const int palindrome_index = i - (palindrome_extension_size[i] - 1);
    if (palindrome_length > solution_length) {
      solution_index = palindrome_index;
      solution_length = palindrome_length;
    }
  }

  std::fill(palindrome_extension_size.begin(), palindrome_extension_size.end(), 0);
  for (int i = 0; i < string_size; ++i) {
    int left_index = i - palindrome_extension_size[i];
    int right_index = i + palindrome_extension_size[i] + 1;
    while (left_index >= 0 && right_index < string_size && string[left_index] == string[right_index]) {
      ++palindrome_extension_size[i];

      left_index = i - palindrome_extension_size[i];
      right_index = i + palindrome_extension_size[i] + 1;
    }

    const int palindrome_length = 2 * (palindrome_extension_size[i] - 1) + 2;
    const int palindrome_index = i - (palindrome_extension_size[i] - 1);
    if (palindrome_length > solution_length) {
      solution_index = palindrome_index;
      solution_length = palindrome_length;
    }
  }

  return string.substr(solution_index, solution_length);
}
#endif // TRIVIAL
