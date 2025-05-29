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
    vector<int>arr={1,2,3,4,5};
    node *head;
    head=create(arr,0,arr.size());
    // removing the nth node from the end
    node *cur=head;
    node *prev=NULL;
    int x,count=0;
    cout<<"enter the value of the x";
    cin>>x;
    count=arr.size()-x;
    if(count==0){
        head=cur->next;
        delete cur;
    }else{
        while(count){
            prev=cur;
            cur=cur->next;
            count--;
        }
        prev->next=cur->next;
        delete cur;
    }
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }
}