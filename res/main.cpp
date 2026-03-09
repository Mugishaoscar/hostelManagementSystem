#include <iostream>
#include "Restaurant.h"

int main() {
    RestaurantSystem myResto;
    int choice;

    while (true) {
        std::cout << "\n--- Permanent Record System ---\n";
        std::cout << "1. Add New Sale\n2. View Full History & Totals\n3. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string n, c;
            double p;
            int q;

            std::cout << "Enter Item Name: ";
            std::cin >> n;
            std::cout << "Enter Category (Meal/Drink): ";
            std::cin >> c;
            std::cout << "Price: ";
            std::cin >> p;
            std::cout << "Quantity: ";
            std::cin >> q;

            myResto.saveTransaction(n, c, p, q);
        } 
        else if (choice == 2) {
            myResto.displayFullHistory();
        } 
        else if (choice == 3) {
            break;
        }
    }
    return 0;
}