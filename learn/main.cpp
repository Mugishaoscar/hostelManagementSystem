#include "student.h"
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int id;
    student s1;
    resident* r1;
    studentNode* next;
    // studentNode node(100,"oscar");
    for (int i=0;i<=2;i++){

        cout<<"enter your id";
        cin>>id;

        cin.ignore();
        cout<<"enter your name";
        getline(cin,name);


        s1.enqueue(id,name);
    }
    next=s1.dequeue();
    r1add(next,100)
    //s1.dequeue();
    s1.display();
}