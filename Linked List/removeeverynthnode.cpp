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
    int count=0;
    node *cur=head;
    node *prev=NULL;
    while(cur){
        count++;
        if(count==3){
            prev->next=cur->next;
            delete cur;
            cur=prev->next;;
            count=0;
        }else{
            prev=cur;
            cur=cur->next;
        }
    }
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }
}