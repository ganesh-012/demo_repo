// implimentation of the queue by the stack

#include<iostream>
#include<stack>
using namespace std;
class queue{
    public:
    stack<int>st1;
    stack<int>st2;

    bool isempty(){
        return st1.empty() && st2.empty();
    }
    // first of all we need to push the elements to stack 1
    // stack 1 is for push operation
    void push(int x){
        st1.push(x);
    }

    // stack 2 is for pop function
    void pop(){
        if(isempty()){
            cout<<"under loaded ";
        }else if(!st2.empty()){
            int element=st2.top();
            st2.pop();
            cout<<element<<endl;
        }else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int element=st2.top();
            st2.pop();
            cout<<element<<endl;
        }
    }

    int peek(){
        if(isempty()){
            cout<<" stack is empty";
        }else if(!st2.empty()){
            return st2.top();
        }else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }



};
int main(){
    queue q1;
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.pop();
    cout<<q1.peek();
}