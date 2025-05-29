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
    vector<int>arr={1,2,3,4,3,2,1};
    node *head;
    head=create(arr,0,arr.size());
    int count=0,mid;
    // to count the no.of nodes
    node *temp=head;
    while(temp){
        count++;
    }
    mid=count/2;
    // to seperate into the two parts
    node *cur=head;
    node *prev=NULL;
    while(mid--){
        prev=cur;
        cur=cur->next;
    }
    prev->next=NULL;
    node *front=NULL;
    prev=NULL;
    while(cur){
        front=cur->next;
        cur->next=NULL;
        prev=cur;
        cur=front;
    }
    node *start=head;
    node *end=prev;
    while(start){
        if(start->data!=end->data){
            cout<<"not palindrome";
            break;
        }
        start=start->next;
        end=end->next;
    }
}




















