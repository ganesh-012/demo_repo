#include<iostream>
using namespace std;
class node{
    public:
    node(){

    }
    int data;
    node *next;
    node(int data){
        cout<<"contructer is called"<<endl;
        this->data = data;
        next=NULL;
    }
};

// to insert at ending
/*node *create(int arr[],int index,int n){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=create(arr,index+1,n);
    return temp;
}*/

// to insert at the starting point

node *create(int arr[],int index,int n,node *prev){
    if(index==n){
        return prev;
    }
    node *temp=new node(arr[index]);
    temp->next=prev;
    create(arr,index+1,n,temp);
}
int main(){
    /*//static allocation
    node A1;
    A1.data=10;
    cout<<A1.data<<endl;
    //dynamic allocation 
    // node *head;
    head = new node(10);
    //insertion 
    node *temp;
    temp = new node(40);
    temp->next=head;
    head=temp;

    node *head;
    head = NULL;
    int arr[]={1,2,3};
    for(int i=0;i<3;i++){
        if(head == NULL){
            head = new node(arr[i]);
        }else{
            node *temp;
            temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    // for printing
    node *temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //insertion at end
    node *head=NULL;
    node *tail=NULL;
    int arr[]={1,2,3};
    for(int i=0;i<3;i++){
        if(head==NULL){
            head=new node(arr[i]);
            tail=head;
        }else{
            tail->next=new node(arr[i]);
            tail=tail->next;
        }
    }
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    int arr[]={1,2,3};
    node*head;
    head=create(arr,0,3,NULL);
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    int x;
    cout<<"enter the value of the of the x";
    cin>>x;
    node *tail=head;
    for(int i=0;i<x-1;i++){
        tail=tail->next;
    }
    node *temp2=new node(30);
    temp2->next=tail->next;
    tail->next=temp2;
    node *temp3=head;
    while(temp3){
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }*/

    //  inserting at the middle;

    int arr[]={1,2,3};
    node*head;
    head=create(arr,0,3,NULL);
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    int x;
    cout<<"enter the value of the of the x";
    cin>>x;
    node *tail=head;
    for(int i=0;i<x-1;i++){
        tail=tail->next;
    }
    node *temp2=new node(30);
    temp2->next=tail->next;
    tail->next=temp2;
    node *temp3=head;
    while(temp3){
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
}