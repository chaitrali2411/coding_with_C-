#include <iostream>
using namespace std;

// Node of a singly linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() { clear(); }

    // 1. Prepend a node
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // 2. Append a node (insertAtBack)
    void insertAtBack(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    // 3. Remove first occurrence of val
    bool deleteValue(int val) {
        if (!head) return false;
        if (head->data == val) {
            Node* tmp = head;
            head = head->next;
            delete tmp;
            return true;
        }
        Node* curr = head;
        while (curr->next && curr->next->data != val)
            curr = curr->next;
        if (!curr->next) return false;
        Node* tmp = curr->next;
        curr->next = tmp->next;
        delete tmp;
        return true;
    }

    // 4. Search for val
    bool search(int val) const {
        Node* curr = head;
        while (curr) {
            if (curr->data == val) return true;
            curr = curr->next;
        }
        return false;
    }

    // 5. Print list
    void display() const {
        Node* curr = head;
        cout << "List: ";
        while (curr) {
            cout << curr->data;
            if (curr->next) cout << " -> ";
            curr = curr->next;
        }
        cout << "\n";
    }

    // 6. Delete all nodes
    void clear() {
        Node* curr = head;
        while (curr) {
            Node* tmp = curr;
            curr = curr->next;
            delete tmp;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList list;

    // Demo operations:
    list.insertAtHead(10);
    list.insertAtHead(5);
    list.insertAtBack(15);
    list.insertAtBack(20);
    list.display();             // List: 5 -> 10 -> 15 -> 20

    cout << (list.search(15) ? "15 found\n" : "15 not found\n");

    list.deleteValue(10);
    list.display();             // List: 5 -> 15 -> 20

    list.clear();
    list.display();             // List:

    return 0;
}
