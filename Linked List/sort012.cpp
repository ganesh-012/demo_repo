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
    vector<int>arr={0,1,0,2,2,0,1};
    node *head;
    head=deletion(arr,0,7,NULL);
    // to sort the 0 1 2 we need three nodes
    node *head0=new node(0);
    node *head1=new node(1);
    node *head2=new node(2);
    node *tail=head;
    while(tail){
        if(tail->data==0){
            head0->next=tail;
            head0=head0->next;
            tail=tail->next;
            head0->next=NULL;
        }else if(tail->data==1){
            head1->next=tail;
            head1=head1->next;
            tail=tail->next;
            head1->next=NULL;
        }else{
            head2->next=tail;
            head2=head2->next;
            tail=tail->next;
            head2->next=NULL;
        }
    }
    // at last we need to join this three lists to get the sorted one
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }
}
