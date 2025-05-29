// queues follows the first in and first out


#include<iostream>
using namespace std;
/*class queue{
    public:
    int *arr;
    int first,rear,size;
    queue(int n){
        arr=new int[n];
        first = rear=-1;
        size=n;
    }

    // to check whether it is empty or not
    bool isempty(){
        return first==-1;
    }

    // to check whether it is full or not
    bool isfull(){
        return rear==size-1;

    }

    // to push the elements
    void push(int x){
        if(isempty()){
            first=rear=0;
            arr[0]=x;
        }else if(isfull()){
            cout<<"we cant do it";
        }else{
            rear=rear+1;
            arr[rear]=x;
        }
    }

    // to pop the elements: in queues ele are pop form starting

    void pop(){
        if(isempty()){
            cout<<"there is no element to pop out";
            return;
        }else{
            if(first==rear){
                first=rear=-1;
            }else{
                first=first+1;
            }
        }
    }


    // to get the elements in the starting of the queue

    int start(){
        if(isempty()){
            cout<<"queue is empty";
        }else{
            return arr[first];
        }
    }
};

// 2nd method implementation queue using circular array

class queue{
    public:
    int *arr;
    int first,rear,size;
    queue(int n){
        arr=new int[n];
        first = rear=-1;
        size=n;
    }

    // to check whether it is empty or not
    bool isempty(){
        return first==-1;
    }

    // to check whether it is full or not
    bool isfull(){
        return (rear+1)%size==first;
    }

    // to push the elements
    void push(int x){
        if(isempty()){
            first=rear=0;
            arr[0]=x;
        }else if(isfull()){
            cout<<"we cant do it";
        }else{
            rear=(rear+1)%size;
            arr[rear]=x;
        }
    }

    // to pop the elements: in queues ele are pop form starting

    void pop(){
        if(isempty()){
            cout<<"there is no element to pop out";
            return;
        }else{
            if(first==rear){
                first=rear=-1;
            }else{
                first=(first+1)%size;
            }
        }
    }


    // to get the elements in the starting of the queue

    int start(){
        if(isempty()){
            cout<<"queue is empty";
        }else{
            return arr[first];
        }
    }
};*/


// implimentation of queues by the linked list

class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};
class queue{
    node *first;
    node *rear;
    public:
    queue(){
        first=rear=NULL;
    }
    // to check whether it is empty
    bool isempty(){
        return first==NULL;
 jcm    }

    // to push the values into the linked list
    void push(int x){
        if(isempty()){
            first=new node(x);
            rear=first;
        }else{
            rear->next=new node(x);
            rear=rear->next;
        }
    }

    // to pop the elements
    void pop(){
        if(isempty()){
            cout<<"linked list is empty";
        }else if(first==rear){
            delete first;
        }else{
            node *temp=first;
            first=first->next;
            delete temp;
        }
    }

    // to get the first element

    int start(){
        if(isempty()){
            cout<<"linked list is empty";
        }else{
            return first->data;
        }
    }
};



int main(){
    queue A1;
    A1.push(2);
    cout<<A1.start()<<endl;
}