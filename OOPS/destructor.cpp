/*
  1.  it is an instance member function that is invoked automatically whenever an object is going to be destroyed

  2.  it is the function is going to be called before the object is destroyed

*/

#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int * balance;
    customer(){
        cout<<"clalled"<<endl;
    }

    customer(string name){
        this->name = name;
        cout<<"constructer is called"<<name<<endl;
        //balance = new int;
        //*balance = n;

    }
    void display(){
        cout<<name<<endl;
    }
    //destructer   || it can print in the reverse order
    ~customer(){
        cout<<"destructer is called"<<name<<endl;
    }

};
int main(){
    customer A1("ganesh"),A2("sai");
    //A1.display();
    // dynamic allocation of object;
    customer *A3 = new customer;
    delete A3;




}

