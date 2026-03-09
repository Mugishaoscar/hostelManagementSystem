#include<iostream>
#include"restaurant.h"
using namespace std;

void restaurant::queue(string c,string i,int q,int p){
    sold* s= new sold(c,i,q,p);
    if(rear==nullptr){
        rear=front=s;
    }
    else{
        rear->next=s;
        rear=s;
    }
}
void restaurant::display() {
    restaurant s;
    sold* temp = front;
    if (temp == nullptr) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "ITEMS \t PRICE \t QTY \t CATEGORY \n";
    cout << "------------------------------------------\n";

    while (temp != nullptr) {
        cout << temp->item << "  " << temp->price << "   " 
             << temp->quantity << " \t " << temp->category << endl;
        temp = temp->next;

    }
    
    // THIS IS THE MISSING PART:
    cout << "------------------------------------------\n";
    cout << "THE TOTAL SALES OF DRINK IS: " << s.sumdrink << endl;
    cout << "THE TOTAL SALES OF meal IS: " <<s.summeal << endl;
    cout << "THE TOTAL SALES IS: " << total() << endl; 
}
int restaurant::total(){
    sold* temp=front;
    
    while (temp != nullptr) {
    if(temp->category=="drink"){
        sumdrink=sumdrink+(temp->price*temp->quantity);
    }
    else{
         summeal=summeal+(temp->price*temp->quantity);
    }temp = temp->next; }
    return summeal+sumdrink;
    }
