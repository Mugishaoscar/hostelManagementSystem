#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
using namespace std;
struct sold{
    string category;
    string item;
    int quantity;
    int price;
    int tatal;
    sold* next;
   
    sold(string c,string i,int q,int p):category(c),item(i),quantity(q),price(p){}
};

class restaurant{
    int  sumdrink;
    int  summeal;
    sold* rear;
    sold* front;
    public:
    restaurant(){
    rear=nullptr;
    front=nullptr;
    }
    //restaurant(string c,string i,int q,int p);
    void queue(string c,string i,int q,int p);
    int total();
    void display();
    
    

};
#endif