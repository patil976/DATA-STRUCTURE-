#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// Insert Operation (Enqueue)
void insert() {
    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " inserted successfully.\n";
}

// Delete Operation (Dequeue)
void deleteElement() {
    if (front == NULL) {
        cout << "Queue Underflow! Cannot delete.\n";
        return;
    }

    Node* temp = front;
    cout << front->data << " deleted successfully.\n";
    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

// Display Queue
void display() {
    if (front == NULL) {
        cout << "Queue is Empty.\n";
        return;
    }

    Node* temp = front;
    cout << "Queue elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice;

    do {
        cout << "\n--- Queue Using Linked List ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: insert(); break;
            case 2: deleteElement(); break;
            case 3: display(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

