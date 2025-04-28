#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeSortedLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = l1 ? l1 : l2;
    return dummy.next;
}

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val;
        if (head->next) std::cout << " → ";
        head = head->next;
    }
    std::cout << "\n";
}

ListNode* createList(const std::vector<int>& vals) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int val : vals) {
        ListNode* node = new ListNode(val);
        if (!head) head = node;
        else tail->next = node;
        tail = node;
    }
    return head;
}

void deleteList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    ListNode* l1 = createList({1, 3, 5});
    ListNode* l2 = createList({2, 4, 6});

    std::cout << "List 1: ";
    printList(l1);
    std::cout << "List 2: ";
    printList(l2);

    ListNode* merged = mergeSortedLists(l1, l2);

    std::cout << "Merged: ";
    printList(merged);

    deleteList(merged);
    return 0;
}
