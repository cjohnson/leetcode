#pragma once

#include <cassert>
#include <cstddef>

#include "ListNode.h"

// #define RECURSIVE
#define ITERATIVE

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
#ifdef DEBUG
  ListNode *dl1 = l1;
  ListNode *dl2 = l2;
  size_t l1_count = 0;
  size_t l2_count = 0;
  while (dl1 != nullptr) {
    ++l1_count;
    assert(0 <= dl1->val && dl1->val <= 9);

    dl1 = dl1->next;
  }
  while (dl2 != nullptr) {
    ++l2_count;
    assert(0 <= dl2->val && dl2->val <= 9);

    dl2 = dl2->next;
  }
  assert(1 <= l1_count && l1_count <= 100);
  assert(1 <= l2_count && l2_count <= 100);
#endif // DEBUG

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

#ifdef ITERATIVE
inline ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
  assert(l1 != nullptr);
  assert(l2 != nullptr);
#ifdef DEBUG
  ListNode *dl1 = l1;
  ListNode *dl2 = l2;
  size_t l1_count = 0;
  size_t l2_count = 0;
  while (dl1 != nullptr) {
    ++l1_count;
    assert(0 <= dl1->val && dl1->val <= 9);

    dl1 = dl1->next;
  }
  while (dl2 != nullptr) {
    ++l2_count;
    assert(0 <= dl2->val && dl2->val <= 9);

    dl2 = dl2->next;
  }
  assert(1 <= l1_count && l1_count <= 100);
  assert(1 <= l2_count && l2_count <= 100);
#endif // DEBUG

  ListNode result(0);
  ListNode *ptr = &result;
  int carry = 0;
  int val = 0;

  while (l1 != nullptr || l2 != nullptr || carry != 0) {
    val = carry;
    if (l1 != nullptr) {
      val += l1->val;
      l1 = l1->next;
    }
    if (l2 != nullptr) {
      val += l2->val;
      l2 = l2->next;
    }

    carry = val / 10;
    val %= 10;

    ptr->next = new ListNode(val);
    ptr = ptr->next;
  }
  return result.next;
}
#endif // ITERATIVE
