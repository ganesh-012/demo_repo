#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    public:
    void introduce(){
        cout<<name<<endl;
    }
};
class employee : public person{
    public:
    int salary;
    public:
    void print(){
        cout<<salary<<endl;
    }
};
class manager : public employee{
    string department;
    public:
    manager(string a,int b,string c){
        name=a;
        salary=b;
        department=c;
    }

    
};
int main(){
    manager A1("ganesh",1,"mme");
    A1.salary=10;
    cout<<A1.salary<<endl;
}