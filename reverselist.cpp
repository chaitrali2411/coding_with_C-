#include <iostream>
using namespace std;

// Definition of a node in the linked list
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize the node
    Node(int x) : data(x), next(nullptr) {}
};

// Function to insert a node at the end of the list
void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* previous = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    // Traverse the list and reverse the links
    while (current != nullptr) {
        next = current->next;   // Save next node
        current->next = previous; // Reverse current node's pointer
        previous = current;     // Move previous to current node
        current = next;         // Move to next node
    }
    return previous; // New head of the reversed list
}

// Main function to demonstrate reversing a linked list
int main() {
    Node* head = nullptr;

    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    
    cout << "Original List: " << endl;
    printList(head);
    
    // Reverse the linked list
    head = reverseList(head);
    
    cout << "Reversed List: " << endl;
    printList(head);

    // Free allocated memory
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    
    return 0;
}
