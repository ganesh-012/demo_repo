#include<iostream>
#include<vector>
#include<queue>
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
node *binary_tree(){
    int x;
    cout<<"enter the value of the x:";
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node *temp=new node(x);
    temp->left=binary_tree();
    temp->right= binary_tree();
    return temp;
}

// logic for the boundary traversal

void leftnode(node *root,vector<int>&ans){
    if(!root || !root->left && !root->right){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        leftnode(root->left,ans);
    }else{
        leftnode(root->right,ans);
    }

}

void leafnode(node *root,vector<int>&ans){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        ans.push_back(root->data);
        return;
    }
    leafnode(root->left,ans);
    leafnode(root->right,ans);
}

void rightnode(node *root,vector<int>&ans){
    if(!root || !root->left && !root->right){
        return;
    }
    if(root->right){
        rightnode(root->right,ans);
    }else{
        rightnode(root->left,ans);
    }
    ans.push_back(root->data);
}

vector<int> boundary_traversal(node *root){
    vector<int>ans;
    ans.push_back(root->data);
    // step : for the lest nodes excluding the leaf node
    leftnode(root->left,ans);
    // step2: for the leaf nodes
    if(root->left && root->right){
        leafnode(root,ans);
    }
    //step 3: for the right nodes excluding the leaf node

    rightnode(root->right,ans);

    return ans;
}

int main(){
    node *root=binary_tree();
    vector<int>ans;
    ans=boundary_traversal(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}