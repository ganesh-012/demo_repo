#include<iostream>
#include<vector>
using namespace std;
class  node{
    public:
    int data;
    node *prev;
    node *next;
    node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};
//recursion insertion at start
node * create(vector<int>&arr,int index,int n,node *tail){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=tail;
    temp->prev=create(arr,index+1,n,temp);
    return temp;
}


// recursion at end

node * deletion(vector<int>&arr,int index,int n,node *tail){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->prev=tail;
    temp->next=deletion(arr,index+1,n,temp);
    return temp;
}
int main(){
    node *head=NULL;
    vector<int>arr={1,2,3};
    /*if(head==NULL){
        head=new node(10);
    }else{
        node *temp=new node(10);
        temp->next=head;
        head->prev=temp;
        temp->prev=NULL;
        head=temp;
    }
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }

    // recursion at start
    head=create(arr,0,3,NULL);
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }

    // insertion at end

    if(head==NULL){
        head=new node(10);
    }else{
        node *temp=new node(10);
        temp->next=NULL;
        temp->prev=head;
        head->next=temp;
    }
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }*/

    // recurrsion at end;
    head = deletion(arr,0,3,NULL);
    /*node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }*/


    // insertion at the middle


    int pos;
    cout<<"enter the position";
    cin>>pos;
    int index=pos-1;
    node *tail=head;
    while(index--){
        tail=tail->next;
    }
    if(pos==arr.size()){
        node *temp=new node(20);
        temp->prev=tail;
        temp->next=NULL;
        tail->next=temp;
    }else{
        node *temp=new node(20);
        temp->prev=tail;
        temp->next=tail->next;
        tail->next=temp;
    }
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }


}
