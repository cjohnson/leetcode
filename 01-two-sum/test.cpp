#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    // Example 1
    {
        vector<int> nums = {2, 7, 11, 15 };
        int target = 9;

        auto pair = solution.twoSum(nums, target);

        assert(pair.size() == 2);
        assert(count(pair.begin(), pair.end(), 0) == 1);
        assert(count(pair.begin(), pair.end(), 1) == 1);
    }
    std::cout << "Example 1: PASS" << std::endl;

    // Example 2
    {
        vector<int> nums = {3, 2, 4 };
        int target = 6;

        auto pair = solution.twoSum(nums, target);

        assert(pair.size() == 2);
        assert(count(pair.begin(), pair.end(), 1) == 1);
        assert(count(pair.begin(), pair.end(), 2) == 1);
    }
    std::cout << "Example 2: PASS" << std::endl;

    // Example 3
    {
        vector<int> nums = {3, 3 };
        int target = 6;

        auto pair = solution.twoSum(nums, target);

        assert(pair.size() == 2);
        assert(count(pair.begin(), pair.end(), 0) == 1);
        assert(count(pair.begin(), pair.end(), 1) == 1);
    }
    std::cout << "Example 3: PASS" << std::endl;

    return 0;
}
