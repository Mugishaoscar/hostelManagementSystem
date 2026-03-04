#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// --- 1. The Basic Node Structure ---
struct Node {
    string name;
    int id;
    int roomNumber; // Only used once allocated
    Node* next;

    // Constructor to make creating nodes easier
    Node(string n, int i) : name(n), id(i), roomNumber(0), next(nullptr) {}
};

// --- 2. Manual Queue Class (Waiting List) ---student
class WaitingList {
private:
    Node* front;
    Node* rear;

public:
    WaitingList() : front(nullptr), rear(nullptr) {}

    void enqueue(string name, int id); // Add to back
    Node* dequeue();                   // Remove from front and return the data
    void displayWaitingList();
    bool isEmpty();
};

// --- 3. Manual Linked List Class (Allocated Rooms) ---
class ResidentList {
private:
    Node* head;
public:
    ResidentList() : head(nullptr) {}

    void addResident(Node* student, int roomNum); // Add to the list
    void removeResident(int id);                  // Remove (Checkout)
    void displayResidents();
};
#endif