#include <iostream>
#include "Student.h"

int main() {
    WaitingList queue;
    ResidentList residents;
    int choice, id, roomCounter = 101;
    string name;
    while (true) {
        cout << "\n--- Hostel Management System ---\n";
        cout << "1. Apply for Room (Enqueue)\n";
        cout << "2. Allocate Room (Dequeue -> Add to List)\n";
        cout << "3. View Waiting List\n";
        cout << "4. View Allocated Rooms\n";
        cout << "5. Exit\n";
        cout << "Enter choice:";
        cin >> choice;
        if (choice == 1) {
            cin.ignore();
            cout << "Enter Name: "; 
            getline(cin,name) ;
            cout << "Enter ID: "; 
            cin >> id;
            queue.enqueue(name, id);
        } 
        else if (choice == 2) {
            Node* nextStudent = queue.dequeue();
            if (nextStudent != nullptr) {
                residents.addResident(nextStudent, roomCounter++);
            } else {
                cout << "No students in waiting list!\n";
            }
        } 
        else if (choice == 3) {
            queue.displayWaitingList();
        } 
        else if (choice == 4) {
            residents.displayResidents();
        } 
        else if (choice == 5) {
            break;
        }
    }
    return 0;
}