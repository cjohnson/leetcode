#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

#include "Solution.h"

using namespace std;

ListNode* vector_to_list(const vector<int>& vec) {
    ListNode* result = nullptr;
    for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        auto* temp = new ListNode(*rit, result);
        result = temp;
    }
    return result;
}

bool same_as_vector(ListNode* number, const vector<int>& vec) {
    auto it = vec.begin();
    while (it != vec.end() && number != nullptr) {
        if (*it != number->val) return false;
        ++it;
        number = number->next;
    }
    if (it == vec.end() && number == nullptr) return true;
    return false;
}

void destroy_list(ListNode* node) {
    while (node != nullptr) {
        auto* temp = node->next;
        delete node;
        node = temp;
    }
}

int main() {
    Solution solution;

    // Example 1
    {
        vector<int> num1_vec = { 2, 4, 3 };
        auto* num1 = vector_to_list(num1_vec);
        vector<int> num2_vec = { 5, 6, 4 };
        auto* num2 = vector_to_list(num2_vec);

        auto* result = solution.addTwoNumbers(num1, num2);

        vector<int> correct = { 7, 0, 8 };
        assert(same_as_vector(result, correct));

        destroy_list(num1);
        destroy_list(num2);
    }
    std::cout << "Example 1: PASS" << std::endl;

    // Example 2
    {
        vector<int> num1_vec = { 0 };
        auto* num1 = vector_to_list(num1_vec);
        vector<int> num2_vec = { 0 };
        auto* num2 = vector_to_list(num2_vec);

        auto* result = solution.addTwoNumbers(num1, num2);

        vector<int> correct = { 0 };
        assert(same_as_vector(result, correct));

        destroy_list(num1);
        destroy_list(num2);
    }
    std::cout << "Example 2: PASS" << std::endl;

    // Example 3
    {
        vector<int> num1_vec = { 9, 9, 9, 9, 9, 9, 9 };
        auto* num1 = vector_to_list(num1_vec);
        vector<int> num2_vec = { 9, 9, 9, 9 };
        auto* num2 = vector_to_list(num2_vec);

        auto* result = solution.addTwoNumbers(num1, num2);

        vector<int> correct = { 8, 9, 9, 9, 0, 0, 0, 1 };
        assert(same_as_vector(result, correct));

        destroy_list(num1);
        destroy_list(num2);
    }
    std::cout << "Example 3: PASS" << std::endl;

    return 0;
}
