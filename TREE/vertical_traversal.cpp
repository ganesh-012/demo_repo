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

// logic for the vertical traversal

void find(node *root,int pos,int &l,int &r){
    if(!root){
        return;
    }
    l=min(pos,l);
    r=max(pos,r);
    find(root->left,pos-1,l,r);
    find(root->right,pos+1,l,r);
}
vector<int> vertical_traversal(node *root,int l,int r){
    queue<node *>q;
    queue<int>index;
    find(root,0,l,r);
    vector<vector<int>>negative(abs(l)+1);
    vector<vector<int>>positive(r+1);
    vector<int>ans;
    q.push(root);
    index.push(0);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        int pos=index.front();
        index.pop();
        if(pos>=0){
            positive[pos].push_back(temp->data);
        }
        if(pos<0){
            negative[abs(pos)].push_back(temp->data);
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

    // now we need to copy the ele into the single vector
    for(int i=negative.size()-1;i>0;i--){
        for(int j=0;j<negative[i].size();j++){
            ans.push_back(negative[i][j]);
        }
    }

    for(int i=0;i<positive.size();i++){
        for(int j=0;j<positive[i].size();j++){
            ans.push_back(positive[i][j]);
        }
    }

    return ans;
}
int main(){
    node *root=binary_tree();
    vector<int>ans;
    ans=vertical_traversal(root,0,0);
    cout<<"done successfully"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}