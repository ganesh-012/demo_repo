
// multiple parents single child;

#include<iostream>
using namespace std;
class engineer{
    public:
    string branch;
    void work(){
        cout<<branch<<endl;
    }
};
class youtube{
    public:
    int subs;
    void display(){
        cout<<subs<<endl;
    }
};
class codeteacher : public engineer,public youtube{
    protected :
    string name;
    public:
    codeteacher(string a,int b,string c){
        branch=a;
        subs=b;
        name=c;
    }
    void showcase(){
        cout<<name<<endl;
        display();
        work();
    }
};
int main(){
    codeteacher A1("cse",3,"ganesh");
    A1.showcase();
}