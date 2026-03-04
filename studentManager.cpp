#include "Student.h"
#include <iostream>

// --- QUEUE: WAITING LIST LOGIC ---
void WaitingList::enqueue(string name, int id) {
    Node* newNode = new Node(name, id);
    if (rear == nullptr) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

Node* WaitingList::dequeue() {
    if (front == nullptr) return nullptr; // Queue empty
    Node* temp = front;
    front = front->next;

    if (front == nullptr) rear = nullptr; // Queue became empty
    
    // We return the pointer so we can move the student to the Resident List
    return temp; 
}

void WaitingList::displayWaitingList() {
    Node* temp = front;
    cout << "\n--- Current Waiting List ---\n";
    while (temp != nullptr) {
        cout << "ID: " << temp->id << " | Name: " << temp->name << endl;
        temp = temp->next;
    }
}

// --- LINKED LIST: RESIDENT LOGIC ---
void ResidentList::addResident(Node* student, int roomNum) {
    if (student == nullptr) return;
       
    student->roomNumber = roomNum;
    student->next = head; // Add to the beginning of the list (fastest)
    head = student;
    cout << "Allocated Room " << roomNum << " to " << student->name << endl;
}

void ResidentList::displayResidents() {
    Node* temp = head;
    cout << "\n--- Allocated Rooms ---\n";
    while (temp != nullptr) {
        cout << "Room: " << temp->roomNumber << " | " << temp->name << " (ID: " << temp->id << ")" << endl;
        temp = temp->next;
    }
}