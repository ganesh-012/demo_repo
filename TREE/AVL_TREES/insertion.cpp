#include<iostream>
using namespace std;
class node{
    public:
    int data,height;
    node *left,*right;
    node(int data){
        this->data=data;
        height=1;
        left=right=NULL;
    }
}

int get_height(node *root){
    if(!root){
        return 0;
    }
    return root->height;
}

int get_balance(node *root){
    return get_height(root->left)-get_height(root->right);
}

node *left_rotation(node *root){
    node *child=root->right;
    node *child_left=child->left;
    child->left=root;
    root->right=child_left;

    //update height
    root->height = 1+max(get_height(root->left),get_height(root->right));
    child->height=1+max(get_height(child->left),get_height(child->right));


    return child;
}

node *right_rotation(node *root){
    node *child=root->left;
    node * child_right=child->right;
    child->right=root;
    root->left=child_right;

    // update height
    root->height = 1+max(get_height(root->left),get_height(root->right));
    child->height=1+max(get_height(child->left),get_height(child->right));

    return child;
}
node *insert(node *root,int key){
    // root doesn't exist
    return new node(key);

    // root exist
    if(key<root->data){     // left side
        root->left=insert(root->left,key);
    }else if(key>root->data){
        root->right=insert(root->right,key);
    }else{
        return root;
    }

    // update height
    root->height=1+max(get_height(root->left)+get_height(root->right));

    // check balance 

    int balance = get_balance(root);

    //left left case
    if(balance>1 && key<root->left->data){
        return right_rotation(root);
    }
    //left right case

    else if(balance >1 && key>root->left->data){
        root->left = left_rotation(root->left);
        return right_rotation(root);
    }
    //right right case

    else if(balance <1 && key>root->right->data){
        return left_rotation(root);
    }
    //right left case
    ckeck if(balance < 1 && key<root->right->data){
        root->right=right_rotation(root->right);
        return left_rotation(root);
    }
    // not balance
    else{

    }
}
int main(){

    //duplicate ele are not allowed

    node *root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,60);
    root=insert(root,5);
    root=insert(root,100);
    root=insert(root,95);


}