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

// logic for the deletion of the node

node * deletion(node *root,int target){
    if(!root){
        return NULL;
    }
    // first we need to find the deletion element

    if(root->data > target){
        root->left=deletion(root->left,target);
        return root;
    }else if(root ->data < target){
        root->right=deletion(root->right,target);
        return root;
    }else{
        // for the leaf node
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }

        // for containg the one node

        else if(!root->right){
            node *temp=root->left;
            delete root;
            return temp;
        }else if(!root->left){
            node *temp=root->root;
            delete node;
            return root;
        }

        // for the containg the two childs

        else{
            node *child=root->left;
            node *parent=root;

            while(child->right){
                parent=child;
                child=child->right;
            }

            if(root == parent){
                child->right=root->right;
                delete root;
                return child;
            }else{
                parent->right=child->left;
                child->left=root->left;
                child->right=root->right;
                delete root;
                return child;
            }

        }
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

    // logic for the deletion
    node *delete = deletion(root,12);

    // to check whether delete element or not
    in_order(delete);
    

}