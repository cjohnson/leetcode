#include <iostream>
#include <ostream>
#include <vector>

#include "ListNode.h"
#include "Solution.h"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &vec) {
  os << "[ ";
  for (size_t i = 0; i < vec.size(); ++i) {
    if (i > 0) {
      os << ", ";
    }
    os << vec[i];
  }
  os << " ]";
  return os;
}

ListNode *create_from_vector(const std::vector<int> &vec) {
  ListNode result(0);
  ListNode *ptr = &result;
  for (const auto el : vec) {
    ptr->next = new ListNode(el);
    ptr = ptr->next;
  }
  return result.next;
}

void free_list_node(ListNode *node) {
  if (node == nullptr) {
    return;
  }

  free_list_node(node->next);
  delete node;
}

std::vector<int> create_vector(const ListNode *const node) {
  std::vector<int> result;
  if (node == nullptr) {
    return result;
  }

  const ListNode *ptr = node;
  while (ptr != nullptr) {
    result.push_back(ptr->val);
    ptr = ptr->next;
  }

  return result;
}

int main() {
  Solution solution;

  std::vector<int> a, b, actual, expected;
  ListNode *a_l, *b_l, *actual_l;

  a = {2, 4, 3};
  b = {5, 6, 4};
  a_l = create_from_vector(a);
  b_l = create_from_vector(b);
  actual_l = solution.addTwoNumbers(a_l, b_l);
  actual = create_vector(actual_l);
  expected = {7, 0, 8};
  std::cout << "Test case 1\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  a = {0};
  b = {0};
  a_l = create_from_vector(a);
  b_l = create_from_vector(b);
  actual_l = solution.addTwoNumbers(a_l, b_l);
  actual = create_vector(actual_l);
  expected = {0};
  std::cout << "Test case 2\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';

  a = {9, 9, 9, 9, 9, 9, 9};
  b = {9, 9, 9, 9};
  a_l = create_from_vector(a);
  b_l = create_from_vector(b);
  actual_l = solution.addTwoNumbers(a_l, b_l);
  actual = create_vector(actual_l);
  expected = {8, 9, 9, 9, 0, 0, 0, 1};
  std::cout << "Test case 3\n";
  std::cout << "Actual:   " << actual << "\n";
  std::cout << "Expected: " << expected << "\n";
  std::cout << '\n';
}
