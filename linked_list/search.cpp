#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Search for a value in the list; returns pointer to the node or nullptr if not found
Node* search(Node* head, int val) {
    Node* curr = head;
    while (curr) {
        if (curr->data == val)
            return curr;
        curr = curr->next;
    }
    return nullptr;
}

int main() {
    // Manually build a small list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Search for two values
    int keys[] = {20, 40};
    for (int key : keys) {
        Node* found = search(head, key);
        if (found)
            std::cout << "Value " << key << " found in the list.\n";
        else
            std::cout << "Value " << key << " NOT found in the list.\n";
    }

    // Clean up memory
    while (head) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
