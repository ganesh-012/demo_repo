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
node *create(int arr[],int index,int n){
    if(index == n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=create(arr,index+1,n);
    return temp;
}
node *deletion(node *cur,int x){
    if(x==1){
        node *temp=cur->next;
        delete cur;
        return temp;
    }
    cur->next=deletion(cur->next,x-1);
    return cur;
}
int main(){
    int arr[]={1,2,3};
    node *head=NULL;
    head=create(arr,0,3);

    // deletion first node

    /*if(head!=NULL){
        node *temp=head;
        head=head->next;
        delete temp;
    }
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";        
        temp=temp->next;
    }

    // deletion end node

    if(head!=NULL){
        if(head->next==NULL){
            node *temp=head;
            head=NULL;
            delete temp;
       }
        else{
            node *tail=head;
            node *prev=NULL;
            while(tail->next!=NULL){
                prev=tail;
                tail=tail->next;
            }
            prev->next=NULL;
            delete tail;
        }
    }

    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";        
        temp=temp->next;
    }

    // deletion at particular node
    int x;
    cout<<"enter the value of the x";
    cin>>x;
    // deleting 1st node
    if(x==0){
        node *temp=head;
        head=head->next;
        delete temp;
    }
    node *prev=NULL;
    node *tail=head;
    while(x--){
        prev=tail;
        tail=tail->next;
    }
    prev->next=tail->next;
    delete(tail);
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";        
        temp=temp->next;
    }*/

    //deletion of particlular node by recursion
    int x;
    cout<<"enter the value of the x";
    cin>>x;
    head=deletion(head,x);
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}