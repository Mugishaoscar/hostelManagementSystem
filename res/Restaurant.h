#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

class RestaurantSystem {
private:
    const std::string fileName = "restaurant_log.txt";

public:
    // Writes a new transaction line to the file
    void saveTransaction(std::string name, std::string category, double price, int qty);
    
    // Reads every line from the file and calculates the final totals
    void displayFullHistory();
};

#endif