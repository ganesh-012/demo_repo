#include<iostream>
#include<vector>
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
node *create(vector<int>&arr,int index,int n){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=create(arr,index+1,n);
    return temp;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    node *head;
    head=create(arr,0,arr.size());
    int count=0,k;
    node *cur=head;
    node *prev=NULL;
    // to count  number of nodes
    node *temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    // know we want kth value
    cout<<" enter the kth value";
    cin>>k;
    count-=k;
    while(count--){
        prev=cur;
        cur=cur->next;
    }
    // itarate to the last node 
    node *tail=cur;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    prev->next=NULL;
    tail->next=head;
    head=cur;

    // to print the value
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }
    
}