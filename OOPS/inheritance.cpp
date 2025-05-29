// the capability of class to derive property & characteristic from another class
/*
                        external class       with in class       derived class

public                        yes                  yes                  yes
private                       no                   yes                  no
protected                     no                   yes                  yes

   BASE                            CHILD                           RESULT

public                             public                           public
public                             private                          private
public                             protected                        protected
protected                          public                           protected
protected                          private                          private
protected                          protected                        protected

*/
#include<iostream>
using namespace std;
class human{
    public:
    string name;
    int age,weight;
};
class student:private human{
    int roll_num,fee;
    private:
    string name;
    int age,weight;
    
    

    public:
    void get(string a,int b,int c){
        name=a;
        age=b;
        weight=c;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }


};
class teacher : public human{
    int salary,id;

};


int main(){
    student A;
    A.get("ganesh",1,3);
    A.display();
    teacher B;
    B.name="ganeh";
}