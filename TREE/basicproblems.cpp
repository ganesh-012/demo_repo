#include<iostream>
#include<stack>
#include<vector>
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
node * binary_tree(){
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
/*void pre_order(node *root,int &count){
    if(root == NULL){
        return;
    }
    count++;
    //for left
    pre_order(root->left,count);
    // for right
    pre_order(root->right,count);
}

// second method for calculating the size of the tree
int total_node(node *root){
    if(root==NULL){
        return 0;
    }
    return 1+total_node(root->left)+total_node(root->right);
}

// logic for the sum of the node in the tree

int total_sum(node *root){
    if(root == NULL){
        return 0;
    }
    return root->data+total_sum(root->left)+total_sum(root->right);
}

// first approach for the counting leaves
void count_leaf(node *root,int &count){
    if(root ==NULL){
        return;
    }
    if(!root->left && !root->right){
        count++;
        return;
    }
    count_leaf(root->left,count);
    count_leaf(root->right,count);
}
//logic for the second approch for counting leaves
int count_leaves(node *root){
    if(root == NULL){
        return 0;
    }
    if(!root->left && !root->right){
        return 1;
    }
    return count_leaves(root->left)+count_leaves(root->right);
}


// first approach for the counting non-leaf nodes
int count_nonleaf(node *root){
    if(root == NULL){
        return 0;
    }
    if(!root->left && !root->right){
        return 0;
    }
    return 1+count_nonleaf(root->left)+count_nonleaf(root->right);
}

// logic to check two trees are identical or not
bool identical(node *root1,node *root2){
    if(root1==NULL && root2==NULL){
        return 1;
    }

    if(!root1 && root2 || root1 && root2){
        return 0;
    }
    if(root1->data != root2->data){
        return 0;
    }
    return identical(root1->left,root2->left) && identical(root1->right,root2->right);
}

// logic to the mirror tree
node * mirror_tree(node *root){
    if(root == NULL){
        return;
    }
    node *temp=root->right;
    root->right=root->left;
    root->left=temp;
    mirror_tree(root->left);
    mirror_tree(root->right);
}

// logic for check balance 

void height(node *root,int &valid){
    if(root==NULL){
        return;
    }
    int L=height(root->left);
    int R=height(root->right);
    if(abs(L-R)>1){
        valid=0;       //checking whether it is balance or not
    }
    return 1+max(L,R);

}
bool check_balance(node *root){
    int valid=1;
    height(root,valid);
    return valid;
}*/

//logic to print the nodes in spiral order
void spiral_order(node *root,vector<int>&ans){
    stack<node *>st1;  //for R to L
    stack<node *>st2;  // for L to R
    st2.push(root);
    while(!st1.empty() || !st2.empty()){
        // this is fro the R to L
        if(!st1.empty()){
            while(!st1.empty()){
                node *temp=st1.top();
                st1.pop();
                ans.push_back(temp->data);
                if(temp->right){
                    st2.push(temp->right);
                }
                if(temp->left){
                    st2.push(temp->left);
                }
            }
        // this is for the L to R
        }else{
            while(!st2.empty()){
                node *temp=st2.top();
                st2.pop();
                ans.push_back(temp->data);
                if(temp->left){
                    st1.push(temp->left);
                }
                if(temp->right){
                    st1.push(temp->right);
                }
            }
        }
    }
}
int main(){
    // reference tree : 1 2 3 4 -1 -1 5 -1 -1 -1 20 -1 -1
    int count=0;
    node *root=binary_tree();
    /*pre_order(root,count);
    cout<<count<<endl;

    // logic for the second method

    cout<<total_node(root)<<endl;//6
    cout<<total_sum(root)<<endl;//45

    //logic for the counting leaves
    //count_leaf(root,count);
    //cout<<count<<endl;
    cout<<count_leaves(root);

    // logic for the counting non-leaves nodes
    cout<<count_nonleaf(root)<<endl;

    //logic to check whether two trees are identical or not

    node *root2=binary_tree();
    cout<<identical(root,root2);

    //logic for the mirror tree
    mirror_tree(root);

    //check the check balance 
    cout<<check_balance(root);*/

    // print the elements in the spiral order
    vector<int>ans;
    spiral_order(root,ans);
    cout<<"printing the answer elements:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    




}