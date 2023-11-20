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

#ifndef INC_0002_ADD_TWO_NUMBERS_SOLUTION_H
#define INC_0002_ADD_TWO_NUMBERS_SOLUTION_H

#include <cassert>

#include "ListNode.h"

using namespace std;

class Solution {
public:
    /**
     * https://leetcode.com/problems/add-two-numbers/
     *
     * You are given two non-empty linked lists representing two non-negative integers.
     * The digits are stored in reverse order, and each of their nodes contains a single digit.
     * Add the two numbers and return the sum as a linked list.
     *
     * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
     */
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    // Assert leetcode constraints
    assert(l1 != nullptr);
    assert(l2 != nullptr);

    auto result = ListNode(0);
    auto* last = &result;

    int val;
    int carry = 0;
    while (l1 != nullptr || l2 != nullptr || carry > 0) {
        val = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        carry = val / 10;
        val %= 10;

        last->next = new ListNode(val);
        last = last->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return result.next;
}

#endif //INC_0002_ADD_TWO_NUMBERS_SOLUTION_H

#pragma clang diagnostic pop