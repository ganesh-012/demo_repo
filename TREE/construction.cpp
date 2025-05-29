/*
    here we need to construct the tree from pre-in and post-in
    we cant construct unique tree with the pre-post
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

// logic to construct the pre-in tree

int find(int *in,int target,int instart,int inend){
    for(int i=instart;i<=inend;i++){
        if(in[i]==target){
            return i;
        }
    }
    return -1;
}

node * prein_tree(int *in,int *pre,int index,int instart,int inend){
    if(instart > inend){
        return NULL;
    }

    node *root= new node(pre[index]);
    int pos = find(in,pre[index],instart,inend);
    root->left=prein_tree(in,pre,index+1,instart,pos-1);
    root->right=prein_tree(in,pre,index+(pos-instart)+1,pos+1,inend);
    return root;
}

// logic for the post-in construction
int find(int *in,int target,int instart,int inend){
    for(int i=instart;i<=inend;i++){
        if(in[i]==target){
            return i;
        }
    }
    return -1;
}

node * postin_tree(int *in,int *post,int index,int instart,int inend){
    if(instart > inend){
        return NULL;
    }

    node *root= new node(pre[index]);
    int pos = find(in,pre[index],instart,inend);
    root->right=postin_tree(in,post,index-1,pos+1,inend);
    root->left=postin_tree(in,post,index-(inend-pos)-1,instart,pos-1);
    return root;
}

int main(){
    int in[]={4,2,8,5,9,1,6,3,7,10};
    int pre[]={1,2,4,5,8,9,3,6,7,10};
    node *root=prein_tree(in,pre,0,0,9);

    cout<<"succesfully done"<<endl;

    // logic for the post-in construction

    int in[]={4,2,8,5,9,1,6,3,7,10};
    int post[]={1,2,4,5,8,9,3,6,7,10};
    node *root=postin_tree(in,post,9,o,9);
}