
// they are the attributes of class or class member
// they are created by using the static keyword
// only one copy of that member is created for the entire class is shared by all the object
// they can be instialised without using the object
// static member function used to display the staic data when it is in private mode
// ex: classname :: variable=10



#include<iostream>
using namespace std;
class customer{
    string name;
    int account_num,balance;
    static int total_customer;
    static int total_balance;
    public:
    customer(string name,int account_num,int balance){
        this->name=name;
        this->account_num=account_num;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }
    void deposite(int amount){
        balance=+amount;
        total_balance+=amount;
    }
    void withdrawel(int amount){
        balance-=amount;
        if(total_balance>0  && amount<total_balance){
            total_balance-=amount;
        }
    }
    void gettotal_customer(){
        cout<<total_customer<<endl;
    }
    static void access(){
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }

};
int customer :: total_customer = 0;
int customer :: total_balance=0;
int main(){
    customer A1("ganesh",2,3);
    A1.gettotal_customer();
    customer::access();
    customer A2("sai",3,2);
    customer::access();
    A1.deposite(500);
    A1.withdrawel(500);
    customer::access();


    

}