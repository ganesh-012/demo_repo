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
    node *head=NULL;
    head=insert(arr,0,5);
    node *slow=head;
    node *fast=head;
    if(check(slow,fast)){
       // after the checking whether the loop is present now bring the slow pointer to the head
        slow=head;
        // now itarate the slow pointer till it matches with the fast pointer
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        // now we need itarate the slow pointer to check whether slow->next contain the same value as fast pointer contains
        while(slow->next!=fast){  //we can also do this by prev pointer but in all cases
            slow=slow->next;
        }
        // now we need to remove the slow->next to NULL
        slow->next=NULL; 
    }else{
        cout<<"it doesnot contains the loop"<<endl;
    }

}