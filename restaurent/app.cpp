#include<iostream>
#include"restaurant.h"
#include<string>
using namespace std;
int main(){
    int choice;
    string n,c;
    int p,q;
    bool condition=true;
    restaurant obj1;
    
    // menu
    while (true)
    {
        /* code */
   
    
    cout<<"select your choice\n ";
    cout<<"1. add item \n";
    cout<<"2. viell report\n";
    cout<<"3. exit\n";
    cin>>choice;
    if(choice==1){
        cout<<"enter item name\n";
        cin>>n;
        cout<<"enter price per unit\n";
        cin>>p;
        cout<<"enter the quantity\n";
        cin>>q;
        cout<<"enter category(drink/meal)\n";
        cin>>c;
        obj1.queue(c,n,q,p);
    
    }
    else if(choice==2){
        obj1.display();
        //cin.clear();
    }
    else if(choice==3){
        break ;
    } 
else{cout<<"invalid";}}
}