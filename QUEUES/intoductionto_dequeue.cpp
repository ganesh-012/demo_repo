#include<iostream>
using namespace std;
/*class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }

};
class dequeue{
    public:
    node *front;
    node *rear;
    dequeue(){
        front=rear=NULL;
    }
    void push_front(int x){
        if(front==NULL){
            front=rear=new node(x);
            return;
        }else{
            node *temp=new node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
        }
    }

    void push_back(int x){
        if(front==NULL){
            front=rear=new node(x);
            return;
        }else{
            node *temp=new node(x);
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
        }
    }

    void pop_front(){
        if(front==NULL){
            cout<<"underloaded";
        }else{
            node *temp=front;
            front=front->next;
            delete temp;
            if(front){
                front->prev=NULL;
            }else{
                rear=NULL;
            }
        }
    }

    void pop_back(){
        if(front==NULL){
            cout<<"underloaded";
        }else{
            node *temp=rear;
            rear=rear->prev;
            delete temp;
            if(rear){
                rear->next=NULL;
            }else{
                front=NULL;
            }
        }
    }

    int start(){
        if(front==NULL){
            return -1;
        }else{
            cout<<front->data<<endl;
        }
    }

    int end(){
        if(front==NULL){
            return -1;
        }else{
            cout<<rear->data<<endl;
        }
    }
};*/

// implimentation of dequeuue by the array

class dequeue{
    public:
    int *arr;
    int front;
    int rear,size;
    dequeue(){
        arr=new int[5];
        front=rear=-1;
        size=5;// nothing but the size of the array
    }

    bool isempty(){
        return front==-1;
    }

    bool isfull(){
        return (rear+1)%size==front;
    }

    void push_back(int x){
        if(front==-1){
            front=rear=0;
            arr[0]=x;
        }else if(isfull()){
            return;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
        }
    }
    void start(){
        if(isempty()){
            return;
        }else{
            cout<<arr[front]<<endl;
        }
    }
    void end(){
        if(isempty()){
            return;
        }else{
            cout<<arr[rear]<<endl;
        }
    }

    void push_front(int x){
        if(front==-1){
            front=rear=0;
            arr[0]=x;
        }else if(isfull()){
            return;
        }
        else{
            front=(front-1+size)%size;
            arr[front]=x;
        }
    }

    void pop_front(){
        if(front==-1){
            cout<<"underloaded";
        }else if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%size;
        }
    }

    void pop_back(){
        if(front==-1){
            cout<<"underloaded";
        }else if(front==rear){
            front=rear=-1;
        }else{
            rear=(rear-1+size)%size;
        }
    }



};
int main(){
    dequeue d1;
    d1.push_front(2);
    d1.push_back(3);
    d1.push_front(4);
    d1.start();
    
}