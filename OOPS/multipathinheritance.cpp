
// usage of virtual keyword

#include<iostream>
using namespace std;
class human{
    public:
    string name;
};
class engineer: public virtual human{
    public:
    string branch;
    void work(){
        cout<<branch<<endl;
    }
};
class youtube: public virtual human{
    public:
    int subs;
    void display(){
        cout<<subs<<endl;
    }
};
class codeteacher : public engineer,public youtube{
    public:
    codeteacher(string x,string a,int b){
        name=x;
        branch=a;
        subs=b;
    }
    void showcase(){
        cout<<name<<endl;
        display();
        work();
    }
};
int main(){
    codeteacher A1("ganesh","eee",10);
    A1.showcase();
}