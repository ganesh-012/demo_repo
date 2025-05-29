// wrapping up of data & information in single unit,while controlling access to them
// data -> variable ; information -> function
// we need to keep the variable private  #datahiding
// it is all about the information hiding


#include<iostream>
using namespace std;
class customer{
    string name;
    int account_num,balance;
    public:
    customer(string name,int account_num,int balance){
        this->name=name;
        this->account_num=account_num;
        this->balance=balance;
    }
    void deposite(int amount){
        if(amount<0){
            cout<<"invalid"<<endl;   //encapsulation
        }else{
            balance=amount;
        }
    }
    void display(){
        cout<<name<<" "<<account_num<<" "<<balance<<endl; 
    }
};
int main(){
    customer A1("ganesh",2,5);
    A1.deposite(-1);
    A1.display();

}
