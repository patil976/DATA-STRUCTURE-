#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

// Insert Operation (Enqueue)
void insert() {
    int value;
    if (rear == SIZE - 1) {
        cout << "Queue Overflow! Cannot insert.\n";
    } else {
        cout << "Enter value to insert: ";
        cin >> value;

        if (front == -1)
            front = 0;

        queueArr[++rear] = value;
        cout << value << " inserted successfully.\n";
    }
}

// Delete Operation (Dequeue)
void deleteElement() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Cannot delete.\n";
    } else {
        cout << queueArr[front] << " deleted successfully.\n";
        front++;
    }
}

// Display Queue
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty.\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n--- Queue Using Array ---\n";
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

