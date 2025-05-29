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
node *create(int arr[],int index,int n){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=create(arr,index+1,n);
    return temp;
}
node *middle(int count,node *temp){
    count=count/2;
    if(count%2==0){
        while(count){
            temp=temp->next;
            count--;
        }
    }else{
        count=count+1;
        while(count){
            temp=temp->next;
            count--;
        }
    }
    return temp;
}
int main(){
    int arr[]={1,2,3,4,5};
    node * head;
    head=create(arr,0,5);
    // to return the address of the middle of node
    /*int count=0;
    node *temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    head=middle(count,head);
    cout<<count<<endl;
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }*/
    // 2nd method fast and slow method
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node *res=slow;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }
}