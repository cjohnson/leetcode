#pragma clang diagnostic push
#pragma ide diagnostic ignored "readability-convert-member-functions-to-static"

#ifndef INC_01_TWO_SUM_SOLUTION_H
#define INC_01_TWO_SUM_SOLUTION_H

#include <cassert>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int> &nums, int target) {
    // Assert leetcode constraints
    assert(2 <= nums.size() && nums.size() <= 10e4);
#ifndef NDEBUG
    for (int& num : nums) assert(-10e9 <= num && num <= 10e9);
#endif
    assert(-10e9 <= target && target <= 10e9);

    // O(n^2) naive solution
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = 0; j < nums.size(); ++j) {
            if (i == j) continue;
            if (nums[i] + nums[j] == target) return { static_cast<int>(i), static_cast<int>(j) };
        }
    }

    // "You may assume that each input would have exactly one solution"
    assert(false);
}


#endif //INC_01_TWO_SUM_SOLUTION_H

#pragma clang diagnostic pop