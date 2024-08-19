#include <cassert>
#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>

// #define EXHAUSTIVE
#define UNORDERED_MAP

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target);
};

#ifdef EXHAUSTIVE
inline std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
  assert(2 <= nums.size() && nums.size() <= pow(10, 4));
  assert(-pow(10, 9) <= target && target <= pow(10, 9));

  for (int i = 0; i < nums.size(); ++i) {
    for (int j = 0; j < nums.size(); ++j) {
      if (i == j) {
        continue;
      }

      if (nums[i] + nums[j] == target) {
        return { i, j };
      }
    }
  }

  assert(false);
}
#endif // EXHAUSTIVE

#ifdef UNORDERED_MAP
inline std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
  assert(2 <= nums.size() && nums.size() <= pow(10, 4));
  assert(-pow(10, 9) <= target && target <= pow(10, 9));

  std::unordered_map<int, int> map;
  map.reserve(nums.size());

  for (int i = 0; i < nums.size(); ++i) {
    const int num = nums[i];
    assert(-pow(10, 9) <= num && num <= pow(10, 9));

    const auto it = map.find(target - num);
    if (it != map.end()) {
      return {i, it->second};
    }
    map.insert({num, i});
  }

  assert(false);
}
#endif // UNORDERED_MAP
