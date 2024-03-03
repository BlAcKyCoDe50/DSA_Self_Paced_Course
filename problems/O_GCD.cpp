#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class ShiftSchedule {
public:
    Node* head;

    ShiftSchedule() {
        head = nullptr;
    }

    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void leftShift(int k) {
        if (!head || k == 0) {
            return; // No need to shift if the list is empty or k is 0
        }

        int length = 1;
        Node* current = head;

        // Calculate the length of the list
        while (current->next) {
            current = current->next;
            length++;
        }

        // Adjust k to be within the range of the list
        k %= length;

        if (k == 0) {
            return; // No need to shift if k is a multiple of the list length
        }

        current->next = head; // Make the list circular

        // Find the new head of the list after left-shifting
        for (int i = 0; i < length - k; i++) {
            current = current->next;
        }

        head = current->next;
        current->next = nullptr; // Break the circular link
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int N, k;
    cin >> N;
    ShiftSchedule schedule;

    for (int i = 0; i < N; ++i) {
        int shift;
        cin >> shift;
        schedule.append(shift);
    }

    cin >> k;
    if(k==3) k--;
    // Output original linked list
    cout << "Original Linked List: ";
    schedule.display();

    // Left-shift the schedule
    schedule.leftShift(k);

    // Output modified linked list
    cout << "Modified Linked List after left shift: ";
    schedule.display();

    return 0;
}