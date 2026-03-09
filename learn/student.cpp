#include "student.h"
#include<iostream>
using namespace std;
    void student::enqueue(int id,string name){
        studentNode* newnode=new studentNode(id,name);
        if(rear==nullptr){
             rear=front=newnode;
        }else{
        rear->next=newnode;
        rear=newnode;
          
    }}
    studentNode* student::dequeue(){
        studentNode* temp=front;
        front =front->next;
        return temp;
    }
    void student::display(){
        studentNode* temp=front;
        if(rear=nullptr){cout <<"empty"; return;}
        while(temp!=nullptr){
            cout<<"student id :"<<temp->id<<"student name is "<<temp->name<<endl;
            temp=temp->next;
        }
    }
    void resident::add(studentNode* student,int room ){
        if(student==nullptr){
            cout<<"empty";
        }
        student->room=room;
        student->next=head;
        head=student;
    }
    void resident::display(){
       
        studentNode* temp=head;
         while(temp!=nullptr){
        cout<<"name :"<<temp->name<<"id :"<<temp->room<<endl;
        temp=temp->next;
    }

    }