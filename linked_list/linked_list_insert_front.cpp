#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Insert a new node at the front of the list
Node* insertFront(Node* head, int val) {
    Node* node = new Node(val);
    node->next = head;
    return node;  // new head
}

// Print the list contents
void printList(Node* head) {
    Node* curr = head;
    std::cout << "List: ";
    while (curr) {
        std::cout << curr->data;
        if (curr->next) std::cout << " -> ";
        curr = curr->next;
    }
    std::cout << "\n";
}

int main() {
    Node* head = nullptr;  // start with an empty list

    // Add three nodes at the front
    head = insertFront(head, 10);
    head = insertFront(head, 20);
    head = insertFront(head, 30);

    // Should print: List: 30 -> 20 -> 10
    printList(head);

    // Clean up all nodes to avoid memory leaks
    while (head) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
 