
// combination of types of inheritances

#include<iostream>
using namespace std;
class student{
    public:
    void print(){
        cout<<"im a student"<<endl;
    }
};
class male{
    public:
    void printmale(){
        cout<<"male"<<endl;
    }
};
class female{
    public:
    void printfemale(){
        cout<<"female"<<endl;
    }
};
class boy:public student,public male{
    public:
    void boyprint(){
        cout<<"im a boy"<<endl;
    }
};
class girl: public student,public female{
    public:
    void girlprint(){
        cout<<"im a boy"<<endl;
    }
};
int main(){
    boy A1;
    A1.print();
    
}