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
        vector<int> example_1 = { 2, 7, 11, 15 };
        int example_1_target = 9;

        auto sol_1 = solution.twoSum(example_1, example_1_target);

        assert(sol_1.size() == 2);
        assert(count(sol_1.begin(), sol_1.end(), 0) == 1);
        assert(count(sol_1.begin(), sol_1.end(), 1) == 1);
        std::cout << "Example 1: PASS" << std::endl;
    }

    // Example 2
    {
        vector<int> example_2 = { 3, 2, 4 };
        int example_2_target = 6;

        auto sol_2 = solution.twoSum(example_2, example_2_target);

        assert(sol_2.size() == 2);
        assert(count(sol_2.begin(), sol_2.end(), 1) == 1);
        assert(count(sol_2.begin(), sol_2.end(), 2) == 1);
        std::cout << "Example 2: PASS" << std::endl;
    }

    // Example 3
    {
        vector<int> example_3 = { 3, 3 };
        int example_3_target = 6;

        auto sol_3 = solution.twoSum(example_3, example_3_target);

        assert(sol_3.size() == 2);
        assert(count(sol_3.begin(), sol_3.end(), 0) == 1);
        assert(count(sol_3.begin(), sol_3.end(), 1) == 1);
        std::cout << "Example 3: PASS" << std::endl;
    }

    return 0;
}
