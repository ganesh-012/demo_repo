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
/*bool check(vector<node *>&visited,node *cur){
    for(int i=0;i<visited.size();i++){
        if(visited[i]==cur){
            return 1;
        }
    }
    return 0;
}*/
// functiomn for the 2nd method
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

    /*// to check the loop contain or not
    node *cur=head;
    vector<bool>visited;
    while(cur){
        if(check(visited,cur)){
            cout<<"present"<<endl;
        }
        visited.push_back(cur);
        cur=cur->next;
    }*/

    //2nd method;
    node *slow=head;
    node *fast=head;
    cout<<check(slow,fast);
}