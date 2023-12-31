/*
Copyright (c) 2023 Collin Johnson

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma clang diagnostic push
#pragma ide diagnostic ignored "readability-convert-member-functions-to-static"

#ifndef INC_01_TWO_SUM_SOLUTION_H
#define INC_01_TWO_SUM_SOLUTION_H

#include <cassert>

#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * https://leetcode.com/problems/two-sum/
     *
     * Given an array of integers nums and an integer target,
     * return indices of the two numbers such that they add up to target.
     *
     * You may assume that each input would have exactly one solution,
     * and you may not use the same element twice.
     *
     * You can return the answer in any order.
     */
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int> &nums, int target) {
    // Assert leetcode constraints
    assert(2 <= nums.size() && nums.size() <= 10e4);
    assert(-10e9 <= target && target <= 10e9);
#ifndef NDEBUG
    for (int& num : nums) {
        assert(-10e9 <= num && num <= 10e9);
    }
#endif //NDEBUG

    // YOUR CODE HERE
    // YOUR CODE HERE

    assert(false && "Unimplemented!");

    // END OF YOUR CODE
    // END OF YOUR CODE

    // "You may assume that each input would have exactly one solution"
    assert(false);
}

#endif //INC_01_TWO_SUM_SOLUTION_H

#pragma clang diagnostic pop