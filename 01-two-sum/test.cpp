#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "Solution.h"

using namespace std;

bool exactly_one_of(const vector<int>& nums, const int target) {
    size_t count = 0;
    for (auto& num : nums) {
        if (num == target) ++count;
        if (count > 1) return false;
    }

    return count == 1;
}

int main() {
    Solution solution;

    // Example 1
    {
        vector<int> example_1 = { 2, 7, 11, 15 };
        int example_1_target = 9;

        auto sol_1 = solution.twoSum(example_1, example_1_target);

        assert(sol_1.size() == 2);
        assert(exactly_one_of(sol_1, 0));
        assert(exactly_one_of(sol_1, 1));
        std::cout << "Example 1: PASS" << std::endl;
    }

    // Example 2
    {
        vector<int> example_2 = { 3, 2, 4 };
        int example_2_target = 6;

        auto sol_2 = solution.twoSum(example_2, example_2_target);

        assert(sol_2.size() == 2);
        assert(exactly_one_of(sol_2, 1));
        assert(exactly_one_of(sol_2, 2));
        std::cout << "Example 2: PASS" << std::endl;
    }

    // Example 3
    {
        vector<int> example_3 = { 3, 3 };
        int example_3_target = 6;

        auto sol_3 = solution.twoSum(example_3, example_3_target);

        assert(sol_3.size() == 2);
        assert(exactly_one_of(sol_3, 0));
        assert(exactly_one_of(sol_3, 1));
        std::cout << "Example 3: PASS" << std::endl;
    }

    return 0;
}
