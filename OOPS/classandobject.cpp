/* OBJECT : It is the entity that has a state and behavior anything that exists in physical world*/

/* CLASS : it is the userdefined data type,which is not exist in physical world just it is blueprint of object*/


#include<iostream>
using namespace std;
class student{
    public:
    string name,grade;
    int id,age;
    //using function getter and setter
    public:
    void setid(int n){
        if(n<0){
            cout<<"invalid";
            return;
        }
        id=n;
    }
    void getid(){
        cout<<id<<endl;
    }
    void setgrade(string n){
        grade=n;
    }
    string getgrade(){
        return grade;
    }
};
int main(){
    student s1;
    s1.name="ganesh";
    cout<<s1.name<<endl;
    s1.setid(-1);
    s1.getid();
    s1.setgrade("A+");
    cout<<s1.getgrade()<<endl;
    cout<<sizeof(s1)<<endl;

}