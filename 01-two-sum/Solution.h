#pragma clang diagnostic push
#pragma ide diagnostic ignored "readability-convert-member-functions-to-static"

#ifndef INC_01_TWO_SUM_SOLUTION_H
#define INC_01_TWO_SUM_SOLUTION_H

#define SOLUTION_HASHMAP

#include <cassert>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

#ifdef SOLUTION_NAIVE
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
#endif

#ifdef SOLUTION_HASHMAP
vector<int> Solution::twoSum(vector<int> &nums, int target) {
    // Assert leetcode constraints
    assert(2 <= nums.size() && nums.size() <= 10e4);
#ifndef NDEBUG
    for (int& num : nums) assert(-10e9 <= num && num <= 10e9);
#endif
    assert(-10e9 <= target && target <= 10e9);

    // O(n) hashmap solution
    unordered_map<int, size_t> map;
    for (size_t i = 0; i < nums.size(); ++i) {
        int& num = nums[i];
        auto it = map.find(target - num);
        if (it != map.end()) return { static_cast<int>(it->second), static_cast<int>(i) };
        map[num] = i;
    }

    // "You may assume that each input would have exactly one solution"
    assert(false);
}
#endif

#endif //INC_01_TWO_SUM_SOLUTION_H

#pragma clang diagnostic pop