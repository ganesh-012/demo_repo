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
    vector<int>arr1={2,3,4,5,6,7};
    vector<int>arr2={1,8,9};
    node *head1,*head2;
    head1=deletion(arr1,0,6,NULL);
    head2=deletion(arr2,0,3,NULL);
    /*// to merge the two sorted linked lists
    node *head=NULL;
    node *temp1=head1;
    node *temp2=head2;
    while(temp1 && temp2){
        if(temp1->data <= temp2->data){
            head=new node(temp1->data);
            temp1=temp1->next;
        }else{
            head=new node(temp2->data);
            temp2=temp2->next;
        }
    }
    while(temp1){
        head=new node(temp1->data);
        temp1=temp1->next;
    }
    while(temp2){
        head=new node(temp2->data);
        temp2=temp2->next;
    }
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }*/

    // without using the head pointer which taken extra
    node *head=new node(0);
    node *tail=head;
    while(head1 && head2){
        if(head1->data<=head2->data){
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }else{
            tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }
    if(head1){
        tail->next=head1;
    }else{
        tail->next=head2;
    }
    tail=head;
    head=head->next;
    delete tail;
    node *res=head->next;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }
}