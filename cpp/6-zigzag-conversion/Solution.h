#include <string>
#include <vector>

#define WAVEFORM
//#define MATRIX

class Solution {
public:
  // https://leetcode.com/problems/zigzag-conversion/description/
  std::string convert(std::string string, int num_rows);
};

#ifdef WAVEFORM
inline std::string Solution::convert(const std::string string, const int num_rows) {
  if (num_rows == 1) {
    return string;
  }

  const int string_length = string.length();
  std::string result(string_length, ' ');
  int result_index = 0;

  const int oscillation_period = (2 * num_rows) - 2;

  for (int i = 0; i < string_length; i += oscillation_period) {
    result[result_index++] = string[i];
  }

  for (int row = 1; row < num_rows - 1; ++row) {
    int index = row;
    int mirror_index = oscillation_period - index;
    while (index < string_length) {
      result[result_index++] = string[index];
      if (mirror_index < string_length) {
        result[result_index++] = string[mirror_index];
      }

      index += oscillation_period;
      mirror_index += oscillation_period;
    }
  }

  for (int i = num_rows - 1; i < string_length; i += oscillation_period) {
    result[result_index++] = string[i];
  }

  return result;
}
#endif // WAVEFORM

#ifdef MATRIX
inline std::string Solution::convert(const std::string string, const int num_rows) {
  if (num_rows == 1) {
    return string;
  }

  std::vector<std::string> matrix(num_rows);
  bool travel_up = true;
  int row_index = 0;
  for (const char character : string) {
    matrix[row_index] += character;

    if (row_index == 0 || row_index == num_rows - 1) {
      travel_up = !travel_up;
    }

    if (travel_up) {
      --row_index;
    } else {
      ++row_index;
    }
  }

  std::string result;
  for (const std::string row_string : matrix) {
    result += row_string;
  }
  return result;
}
#endif // MATRIX
