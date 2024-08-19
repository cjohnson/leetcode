#pragma once

#include <cassert>

#include "ListNode.h"

#define RECURSIVE

class Solution {
public:
  // https://leetcode.com/problems/add-two-numbers/description/
  //
  // You are given two non-empty linked lists representing two non-negative
  // integers. The digits are stored in reverse order, and each of their nodes
  // contains a single digit. Add the two numbers and return the sum as a linked
  // list.
  //
  // You may assume that each input would have exactly one solution, and you may
  // not use the same element twice. You can return the answer in any order.
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);

#ifdef RECURSIVE
private:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2, int carry);
#endif // RECURSIVE
};

#ifdef RECURSIVE
inline ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
  assert(l1 != nullptr);
  assert(l2 != nullptr);

  return addTwoNumbers(l1, l2, 0);
}

inline ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2, int carry) {
  if (l1 == nullptr && l2 == nullptr && carry == 0) {
    return nullptr;
  }

  int val = carry;
  ListNode *nl1 = nullptr;
  ListNode *nl2 = nullptr;
  if (l1 != nullptr) {
    val += l1->val;
    nl1 = l1->next;
  }
  if (l2 != nullptr) {
    val += l2->val;
    nl2 = l2->next;
  }

  int nextCarry = val / 10;
  val %= 10;
  return new ListNode(val, addTwoNumbers(nl1, nl2, nextCarry));
}
#endif // RECURSIVE
