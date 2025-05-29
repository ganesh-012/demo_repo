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
    vector<int>arr={2,2,3,3,4,4};
    node *head;
    head=deletion(arr,0,6,NULL);

    /*// to remove the duplicates
    vector<int>ans;
    node *cur=head->next;
    ans.push_back(head->data);
    while(cur){
        if(cur->data !=ans[ans.size()-1]){
            ans.push_back(cur->data);
        }
    }
    cur=head;
    int index=ans.size();
    while(index--){
        cur->data=ans[index];
        cur=cur->next;
    }
    cur->prev->next=NULL;

    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }*/

    // without using the extra array

    node *temp=head->next;
    if(head==NULL || head->next==NULL){
        // just return the head
    }
    while(temp){
        if(temp->prev->data==temp->data){
            temp->prev->next=temp->next;
            if(temp->next){
                temp->next->prev=temp->prev;
            }
            delete temp;
        }
        temp=temp->next;
    }
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }
}