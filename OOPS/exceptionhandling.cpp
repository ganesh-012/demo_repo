// An exception is an unexpected problem that arises during the execution of a progarm or progarm perminates suddenly with some error


/*#include<iostream>
using namespace std;
class customer{
    string name;
    int balance,acc_num;
    public:
    customer(string name,int balance,int acc_num){
        this->name=name;
        this->balance= balance;
        this->acc_num = acc_num;
    }
    void depoist(int amount){
        if(amount>0){
            balance+=amount;
            cout<<"credited succesfully"<<endl;
        }else{
            throw "invalid amount";
        }
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"debited succesfully"<<endl;
        }else if(amount<0){
            cout<<"invalid amount";
        }else{
            throw "insufficient funds";
        }
    }
    void display(){
        cout<<name<<" "<<balance<<" "<<acc_num<<endl;
    }
};
int main(){
    customer A1("ganesh",1000,711);
    try{
        A1.depoist(100);
        A1.withdraw(3000);
    }catch(const char *p){
        cout<<"exception occuried :"<<p<<endl;
    }
    catch{
        cout<<"exception occuried :"<<p.what()<<endl;
    }
    catch(...)){
        cout<<:"exception occuried"<<endl;
    }

}*/



#include<iostream>
using namespace std;
class invalidvariable : public runtime_error{
    public:
    invalidvariable(const string &msg):runtime_error(msg){

    }
};
int main(){
    int a=2,b=0;
    try{
        if(b==0){
            throw invalidvariable("it is not possible");
        }
        int c=a/b;
        cout<<c<<endl;
    }catch(const invalidvariable &p){
        cout<<"exception occuried :"<<p.what()<<endl;
    }catch(...){
        cout<<"exception occuried :"<<endl;
    }
}