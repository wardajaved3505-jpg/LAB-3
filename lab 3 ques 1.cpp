#include <iostream>
#define SIZE 5   // Maximum size of queue
using namespace std;
class Queue {
    int items[SIZE];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    // Function to insert an element (Enqueue)
    void enqueue(int value) {
        if (rear == SIZE - 1)
            cout << "Queue is full!\n";
        else {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = value;
            cout << value << " inserted into queue.\n";
        }
    }
    // Function to remove an element (Dequeue)
    void dequeue() {
        if (front == -1 || front > rear)
            cout << "Queue is empty!\n";
        else {
            cout << "Deleted: " << items[front] << endl;
            front++;
        }
    }
    // Function to display queue elements
    void display() {
        if (front == -1 || front > rear)
            cout << "Queue is empty!\n";
        else {
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++)
                cout << items[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    cout << "Queue Operations Program \n\n";
    Queue q;
    int choice, value;
    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}
