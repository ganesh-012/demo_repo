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

// logic for the diagonal traversal

void find(node *root,int pos,int &l){
    if(!root){
        return;
    }
    l=max(pos,l);
    find(root->left,pos+1,l);
    find(root->right,pos,l);
}

void dig_traversal(node *root,int pos,vector<vector<int>>&store){
    if(!root){
        return;
    }
    store[pos].push_back(root->data);
    dig_traversal(root->left,pos+1,store);
    dig_traversal(root->right,pos,store);
}
vector<int> diagonal_traversal(node *root){
    int l=0;
    find(root,0,l);
    vector<vector<int>>store(l+1);
    dig_traversal(root,0,store);
    vector<int>ans;
    for(int i=0;i<store.size();i++){
        for(int j=0;j<store[i].size();j++){
            ans.push_back(store[i][j]);
        }
    }
    return ans;

}

int main(){
    node *root=binary_tree();
    vector<int>ans=diagonal_traversal(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}