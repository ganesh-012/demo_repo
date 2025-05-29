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
node *insert(vector<int>arr,int index,int n){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp ->next=insert(arr,index+1,n);
    return temp;
}
bool check(node *slow,node*fast){
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return 1;
        }
    }
    return 0;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    node *head;
    head=insert(arr,0,arr.size());
    node *slow=head;
    node *fast=head;
    cout<<check(slow,fast)<<endl;
    // after the looop is found we need to find the length
    // if loop doesn't exist
    if(fast && fast->next){
        cout<<"it it not looped";
    }else{
        int count=0;
        slow=slow->next;
        count=1;
        while(slow!=fast){
            count+=1;
            slow=slow->next;
        }
        cout<<count<<endl;
    }
}