//  single inheritance

#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;
    public:
    human(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class student:public human{
    int roll;
    public:

    student(string name,int age,int roll):human(name,age){
        //this->name=name;
        //this->age=age;
        this->roll=roll;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll<<endl;
    }
};
int main(){
    student A1("ganesh",2,3);
    A1.display();
}