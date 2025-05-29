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
node *reverse(node *cur,node *prev){
    if(cur==NULL){
        return prev;
    }
    node *future=cur->next;
    cur->next=prev;
    return reverse(future,cur);
}
int main(){
    node *head;
    int arr[]={1,2,3,4,5};
    head=create(arr,0,5);
    // to reverse the linked list
    /*vector<int>ans;
    node *tail=head;
    while(tail){
        ans.push_back(tail->data);
        tail=tail->next;
    }
    int index=ans.size()-1;
    tail=head;
    while(tail){
        tail->data=ans[index];
        tail=tail->next;
        index--;
    }
    // 2nd method for reversing;
    node *cur=head;
    node *prev=NULL;
    node *future=NULL;
    while(cur){
        future=cur->next;
        cur->next=prev;
        prev=cur;
        cur=future;
    }
    head=prev;*/
    // by using recursion
    head=reverse(head,NULL);
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }

}