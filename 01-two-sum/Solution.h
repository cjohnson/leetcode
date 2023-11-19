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
    // O(n^2) naive solution
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size(); ++i) {
            for (size_t j = 0; j < nums.size(); ++j) {
                if (i == j) continue;
                if (nums[i] + nums[j] == target) return { static_cast<int>(i), static_cast<int>(j) };
            }
        }

        // "You may assume that each input would have exactly one solution"
        assert(false);
    }
};


#endif //INC_01_TWO_SUM_SOLUTION_H

#pragma clang diagnostic pop