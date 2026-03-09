#include "Restaurant.h"
#include <iostream>
#include <fstream>
#include <iomanip>

void RestaurantSystem::saveTransaction(std::string name, std::string category, double price, int qty) {
    // std::ios::app ensures we add to the file without deleting old data
    std::ofstream outFile(fileName, std::ios::app);

    if (outFile.is_open()) {
        double total = price * qty;
        // Format: Name Category Price Quantity LineTotal
        outFile << name << " " << category << " " << price << " " << qty << " " << total << std::endl;
        outFile.close();
        std::cout << "Transaction logged permanently.\n";
    } else {
        std::cerr << "File Error: Could not save record.\n";
    }
}

void RestaurantSystem::displayFullHistory() {
    std::ifstream inFile(fileName);
    std::string name, cat;
    double price, lineTotal;
    int qty;

    double mealGrandTotal = 0;
    double drinkGrandTotal = 0;

    if (!inFile.is_open()) {
        std::cout << "No history found. Start by adding a sale.\n";
        return;
    }

    std::cout << "\n" << std::left << std::setw(15) << "ITEM" 
              << std::setw(10) << "CAT" 
              << std::setw(10) << "PRICE" 
              << std::setw(8) << "QTY" 
              << "TOTAL" << std::endl;
    std::cout << "------------------------------------------------------------\n";

    // Loop through every single record stored in the text file
    while (inFile >> name >> cat >> price >> qty >> lineTotal) {
        std::cout << std::left << std::setw(15) << name 
                  << std::setw(10) << cat 
                  << "$" << std::setw(9) << price 
                  << std::setw(8) << qty 
                  << "$" << lineTotal << std::endl;

        // Categorize for the final summary
        if (cat == "Meal" || cat == "meal") mealGrandTotal += lineTotal;
        else if (cat == "Drink" || cat == "drink") drinkGrandTotal += lineTotal;
    }

    inFile.close();

    std::cout << "------------------------------------------------------------\n";
    std::cout << "TOTAL MEALS SOLD:  $" << std::fixed << std::setprecision(2) << mealGrandTotal << std::endl;
    std::cout << "TOTAL DRINKS SOLD: $" << drinkGrandTotal << std::endl;
    std::cout << "OVERALL REVENUE:   $" << (mealGrandTotal + drinkGrandTotal) << std::endl;
    std::cout << "============================================================\n";
}