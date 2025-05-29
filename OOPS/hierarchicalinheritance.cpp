
// single parent multiple childs


#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;
};
class student:public human{
    int roll;
    public:

    student(string name,int age,int roll){
        this->name=name;
        this->age=age;
        this->roll=roll;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll<<endl;
    }
};
class teacher: public human{
    int salary;
    public:
    teacher(string name,int age,int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};
int main(){
    student A1("ganesh",2,3);
    A1.display();
    teacher A2("ganesh",3,4);
    A2.display();
}