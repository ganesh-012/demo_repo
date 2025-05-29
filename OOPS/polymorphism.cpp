// many forms
/*                           polymorphism
          compile time                              runtime
    function            operator                    virtual
    overloading         overloading                 function
*/


// 1.function onverloading

/*#include<iostream>
using namespace std;
class area{
    public:
    int calculate(int r){  //circle
        return 3.14*r*r;
    }
    int calculate(int a,int b){ //rectangle
        return a*b;
    }
};
int main(){
    area A1;
    cout<<A1.calculate(3);
    cout<<A1.calculate(3,4);
}

// 2.operator overloading

#include<iostream>
using namespace std;
class complex{
    int real,img;
    complex(){

    }
    public:
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    complex operator -(complex &c){
        complex ans;
        ans.real=real-c.real;
        ans.img=img-c.img;
        return ans;
    }
};
int main(){
    complex C1(2,4);
    complex C2(3,4);
    complex C3=C1-C2;  //c1 calls function and c2 passed as arguments
    //C3.display();
}*/

// virtual function
// virtual keyword allows collect function should be called for an object

#include<iostream>
using namespace std;
class animal{
    public:
    /*virtual void speak(){   //runtime polymorphism
        cout<<"hehhe"<<endl;
    }*/
    virtual void speak()=0; // pure virtual function
};
class dog : public animal{
    public:
    void speak(){
        cout<<"bark"<<endl;
    }
};
int main(){
    animal *p;
    p=new dog();
    p->speak();
}