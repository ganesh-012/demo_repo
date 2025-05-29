#include<iostream>
#include<vector>
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
    cout<<"enter the value of the x :";
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

// logic for the in-order traversal by the morris traversal

vector<int> in_order(node *root){
    vector<int>ans;
    while(root){
        if(!root->left){    //left part doesnot exist
            ans.push_back(root->data);
            root=root->right;
        }else{          //left part exist 
            node *cur=root->left;
            while(root->right && cur->right!=root){
                cur=cur->right;
            }

            if(cur->right==NULL){  //not traversal
                cur->right=root;
                root=root->left;
            }else{     //traversal
                cur->right=NULL;
                ans.push_back(root->data);
                root=root->right;
            }
        }
    }
    return ans;
}

// logic for the pre order traversal by the morris traversal

void pre_order(node *root) {
    // traversing, while the root node does not, becomes NULL.
    while (root) {
        // When the left child is null, we will print the data and move to the right child
        if (root->left == NULL) {
            cout << root->data << " ";
            root = root->right;
        }
        else {
            /*
            Else we will first find the in-order predecessor of the root node and then check the right child of the node.
            */
            node *current = root->left;
            while (current->right && current->right != root)
                current = current->right;

            /*
            If the right child of the predecessor points to the root node then make the right child point to null and move to the right child of the root node.
            */
            if (current->right == root) {
                current->right = NULL;
                root = root->right;
            }
            else {
                /*
                Otherwise, print the data of the root and make the right child of the predecessor point to the root node. At last move to the left child of the root node.
                */
                cout << root->data << " ";
                current->right = root;
                root = root->left;
            }
        }
    }
}


// for the post order we need to do NRL process and reverse the vector e get the answer

vector<int> post_order(node *root){
    vector<int>ans;
    while(root){
        if(!root->right){    //left part doesnot exist
            ans.push_back(root->data);
            root=root->left;
        }else{          //left part exist 
            node *cur=root->right;
            while(root->left && cur->left!=root){
                cur=cur->right;
            }

            if(cur->left==NULL){  //not traversal
                cur->left=root;
                root=root->right;
            }else{     //traversal
                cur->left=NULL;
                ans.push_back(root->data);
                root=root->left;
            }
        }
    }
    return ans;
}
int main(){
    node *root=binary_tree();
    
    pre_order(root);
}