/* it is the linear data structure, in which insertion and deletion
 only allowed at end,it means at top of the stack
 2. when we define the stack as an Abstract data type, then we are
  only intrested in know the stack operation from user POV
3.it is simply mean,we are not intrested in knowing the details,we are 
intrested in what type of operation we  can perform
4.operation like:push,pop,top,size,empty */


#include<iostream>
#include<vector>
using namespace std;
class stack{
    int *arr;
    int size;
    int top;
    public:
    bool flag;
    stack(int s){
        size=s;
        top=-1;
        arr=new int[5];
        flag=1;
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack is overflowed";
        }else{
            top++;
            arr[top]=value;
            flag=0;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack is underload";
        }else{
            top--;
            if(top==-1){
                flag=1;
            }
        }
    }
    int peak(){
        if(top==-1){
            cout<<"stack is underload";
            return -1;
        }else{
            return arr[top];
        }
    }
    bool isempty(){
        return top==-1;
    }
    int issize(){
        return top+1;
    }
    void display(int index){
        while(size--){
            cout<<arr[index++]<<" ";
        }  
        cout<<endl;     
    }
};
int main(){
    stack S1(5);
    vector<int>arr={1,2,3,4,5};
    int index=0;
    while(index<arr.size()){
        S1.push(arr[index++]);
    }
    S1.display(0);
    cout<<S1.peak()<<endl;
    cout<<S1.isempty()<<endl;
    S1.pop();
    cout<<S1.issize()<<endl;
    S1.push(-1);

    // flag is introduced bcoz when we push -1,flag tells stack is empty or not

    /*int value=S1.peak();
    if(S1.flag==0){
        cout<<value<<endl;
    }*/
    // 2nd method by using the issize function
    int value =S1.peak();
    if(S1.issize()!=0){
        cout<<value<<endl;
    }
}



