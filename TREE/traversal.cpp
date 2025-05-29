/*
1.pre_order : NLR
2.IN_order : LNR
3.post_order : LRN
*/

#include<iostream>
#include<queue>
using namespace std;
class node{
   public:
    int data;
    node *left;
    node *right;
    node(int value){
        data=value;
        left=right=NULL;
    }
};
node *binary_tree(){
    int x;
    cout<<"enter the value of the x"<<endl;
    cin>>x;
    // base condition
    if(x==-1){
        return NULL;
    }
    node *temp=new node(x);
    // logic for the left node
    temp->left=binary_tree();
    temp->right=binary_tree();
    return temp;
}

// logic for the pre order traversal
void pre_order(node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    //for left
    pre_order(root->left);
    // for right
    pre_order(root->right);
}

// logic for the in-order traversal
void in_order(node *root){
    if(root==NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}

//logic of the post_order traversal
void post_order(node *root){
    if(root==NULL){
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}

//logic for the level order
void level_order(node *root){
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        
    }
}
int main(){
   node *root=binary_tree();
   //it is pre_order
   pre_order(root);

   // it is for in_order
   in_order(root);

   //it is for post_order
   post_order(root);

   //it is for level order
   level_order(root);
}