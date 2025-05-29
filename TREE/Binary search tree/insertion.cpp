#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        left=right=NULL;
    }
};

// logic for the insertion of the binary search tree

node * binarysearch_tree(node *root,int value){
    if(!root){
        node *temp=new node(value);
        return temp;
    }
    if(root->data<value){
        root->right=binarysearch_tree(root->right,value);
    }else{
        root->left=binarysearch_tree(root->left,value);
    }
    return root;
}

// logic to print in-order ways that gives the nodes in sort manner
 
void in_order(node *root){
    if(root==NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}

// logic for the searching in the BST

bool binary_search(node *root,int target){
    if(!root){
        return 0;
    }
    if(root->data == target){
        return 1;
    }else if(root->data > target){
        binary_search(root->left,target);
    }else{
        binary_search(root->right,target);
    }
}

int main(){
    node *root=NULL;
    vector<int>arr={6,3,11,5,7,18,12,2,11};
    for(int i=0;i<arr.size();i++){
        root=binarysearch_tree(root,arr[i]);
    }
    cout<<"answer is:";
    in_order(root);

    // for the binary_search
    cout<<endl;

    cout<<binary_search(root,12);

}