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

// logic for the left view of the tree
void left_view(node *root,vector<int>&ans){
    queue<node *>q;
    q.push(root);
    int size;
    while(!q.empty()){
        size=q.size();
        ans.push_back(q.front()->data);
        while(size){
            node *temp=q.front();
            q.pop();
            size--;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// logic for the left view by recursion
void left_viewer(node *root,int level,vector<int>&ans){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    left_viewer(root->left,level+1,ans);
    left_viewer(root->right,level+1,ans);
}

void right_view(node *root,int level,vector<int>&ans){
    if(!root){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    right_view(root->right,level+1,ans);
    right_view(root->left,level+1,ans);
}

// logic for the top view

void find(node *root,int pos,int &l,int &r){
    if(!root){
        return;
    }
    l=min(pos,l);
    r=max(pos,r);
    find(root->left,pos-1,l,r);
    find(root->right,pos+1,l,r);
}
vector<int> top_view(node *root,int l,int r){
    queue<node *>q;
    queue<int>index;
    find(root,0,l,r);
    vector<bool>filled(r-l+1,0);
    vector<int>ans(r-l+1);
    q.push(root);
    index.push(l*-1);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        int pos=index.front();
        index.pop();
        if(!filled[pos]){
            filled[pos]=1;
            ans[pos]=temp->data;
        }
        if(temp->left){
            q.push(temp->left);
            index.push(pos-1);
        }
        if(temp->right){
            q.push(temp->right);
            index.push(pos+1);
        }
    }
    return ans;
}
int main(){
    node *root=binary_tree();

    /*//logic for the left view of the tree
    vector<int>ans;
    left_view(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    // for left viewer
    vector<int>ans;
    left_viewer(root,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    // logic for the right view by recursion
    vector<int>ans;
    right_view(root,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }*/

    // logic for the top view
    vector<int>ans;
    ans=top_view(root,0,0);
    cout<<" successfully done"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
