/* 
1. It is a special function that is invoked automatically at the time of object creation
2. name of the constructor should be same as class name
3. it doesnot have any return type
4. it is used to intialise the values;

*/

#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int account_number;
    int balance;
    customer(){   //Default constructor
        cout<<"constructor is called"<<endl;
        name="rohit";
        account_number=100;
        balance=300;
    }
    customer(string a,int b,int c){    // parameterized constructor
        name=a;
        account_number=b;
        balance=c;
    }

    // constructor overloading


    customer(string a,int b){
        name=a;
        account_number=b;
    }

    //  Inline constructor

    /*inline customer(string a,int b,int c) : name(a),account_number(b),balance(c){

    }*/

    //  copy constructor

    customer(customer &b){
        name=b.name;
        account_number=b.account_number;
        balance=b.balance;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    customer A1;
    customer A2("sai",90,600);
    customer A3("ganesh",400);
    customer A4("sager",40,60);
    customer A5;
    A5=A2;
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display();


}