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


// recursion at end

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
    node * head=NULL;
    vector<int>arr={1,2,3,4,5};
    head=deletion(arr,0,arr.size(),NULL);

    // to delete the node at the end
    /*if(head!=NULL){
        node *temp=head;
        head=head->next;
        delete temp;
        if(head){
            head->prev=NULL;
        }

    }

    // to delete the node at the end
    node *temp=head;
    if(temp->next==NULL){
        delete temp;
        head=NULL;
    }else{
        while(temp->next){
            temp=temp->next;
        }
        temp->prev->next=NULL;
        delete temp;
    }
    
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }*/

    // to delete at any node
    node *temp=head;
    int x;
    cout<<"enter the value of the node";
    cin>>x;
    while(x!=1){
        temp=temp->next;
        x--;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    node *res=head;
    while(res){
        cout<<res->data<<" ";
        res=res->next;
    }

}