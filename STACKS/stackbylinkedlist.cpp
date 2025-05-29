#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
class stack{
    public:
    int size;
    node *top;
    node *temp;
    stack(){
        size=0;
        top=NULL;
    }
    void push(int value){
        /*node *temp=new node(value);
        if(temp==NULL){
            cout<<"stack overflow";
            return;
        }
        temp->next=top;
        top=temp;
        size++;*/

        if(top==NULL){
            top=new node(value);
            size++;
        }else{
            temp=new node(value);
            temp->next=top;
            top=temp;
            size++;
        }
    }
    void pop(){
        if(top->next==NULL){
            node *temp=top;
            delete temp;
            top=NULL;
            size--;
        }else{
            node *temp=top;
            top=top->next;
            delete temp;
            size--;
        }
    }
    int peak(){
        if(top==NULL){
            cout<<"stack is empty";
            return -1;
        }else{
            return top->data;
        }
    }
    bool ifempty(){
        return top==NULL;
    }
    int issize(){
        return size;
    }
};
int main(){
    stack S;
    S.push(6);
    S.push(10);
    cout<<S.peak()<<endl;
    cout<<S.issize()<<endl;
    S.pop();
    S.pop();
    cout<<S.peak()<<endl;
    cout<<S.issize()<<endl;

}