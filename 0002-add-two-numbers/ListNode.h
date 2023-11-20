#ifndef INC_0002_ADD_TWO_NUMBERS_LISTNODE_H
#define INC_0002_ADD_TWO_NUMBERS_LISTNODE_H


struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


#endif //INC_0002_ADD_TWO_NUMBERS_LISTNODE_H
