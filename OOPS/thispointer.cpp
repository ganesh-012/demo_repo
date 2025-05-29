/*
this -> it is the pointer which stores the addess of the object that created

*/



#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int account_number;
    int balance;
    customer(){   //Default constructor
        cout<<"constructor is called";
    }
    /*customer(string name,int account_number,int balance){    // parametarised constructor
        name=name;
        account_number=account_number;
        balance=balance;
    }, to correct the above problem we need to use the this pointer;  
    */
    
    customer(string name,int account_number,int balance){    // parametarised constructor
        this -> name=name;
        this ->  account_number=account_number;
        this -> balance=balance;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    customer A1("ganesh",711,500);
    A1.display();
    
}