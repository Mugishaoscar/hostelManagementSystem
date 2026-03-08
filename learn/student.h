#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

struct studentNode{
   int id;
   string name;
   int room;
   studentNode* next;
   
   studentNode(int i,string n):id(i),name(n),room(0),next(nullptr){}

};
class student{
    studentNode* rear;
    studentNode* front;
    public:
     student(){rear=rear=nullptr; }
    void enqueue(int id,string name);
    studentNode* dequeue();
    void display();
};
class resident{
    studentNode* head;
    public:
    resident(){head=nullptr;}
    void add(studentNode* student,int room );
    void display();
};
#endif