/*
    We already know how to traversal with the recursion but know we 
    need to traversal without recursion
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
    node(int data){
        this->data=data;
        left=right=NULL;
    }
};

// logic for creating the  tree

node * binary_tree(){
    int x;
    cout<<"enter the value of the x: ";
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node *temp=new node(x);
    temp->left=binary_tree();
    temp->right=binary_tree();
}

// logic for the pre order traveral by iterative method

void pre_order(node *root){
    stack<node *>st1;
    st1.push(root);
    while(!st1.empty()){
        node *temp=st1.top();
        st1.pop();
        cout<<temp->data<<" ";
        if(temp->right){
            st1.push(temp->right);
        }
        if(temp->left){
            st1.push(temp->left);
        }
    }
}

// logic for the post_order
// generally in post order we use LRN but we doing with NRL
// then result will be obtained by the reversing the vector
void post_order(node *root,vector<int>&ans){
    stack<node *>st1;
    st1.push(root);
    while(!st1.empty()){
        node *temp=st1.top();
        st1.pop();
        ans.push_back(temp->data);
        // first insert left node
        if(temp->left){
            st1.push(temp->left);
        }
        // now insert the right one
        if(temp->right){
            st1.push(temp->right);
        }
    }
}
int main(){
    node *root=binary_tree();
    //pre_order(root);

    // logic for the post_orde
    vector<int>ans;
    post_order(root,ans);
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }

    

}