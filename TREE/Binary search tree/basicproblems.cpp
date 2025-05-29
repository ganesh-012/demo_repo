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

// logic for the minimum distance between bst nodes
void min_dis(node *root,int prev,int &ans){
    if(!root){
        return;
    }
    min_dis(root->left,prev,ans);
    //if(prev!=INT_MIN)
        ans=min(ans,root->data-prev);
    prev=root->data;
    min_dis(root->right,prev,ans);
}

// logic for the kth sum of smallest elements;
void kthsumof_smallest(node *root,int &sum,int k){
    if(!root){
        return;
    }
    kthsumof_smallest(root->left,sum,k);
    if(k){
        sum+=root->data;
        k--;
    }
    kthsumof_smallest(root->right,sum,k);

}

// logic for the array to bst

void array_to_bst(int arr2[],vector<int>&ans2,int start,int end){
    int mid=start+(end-start)/2;
    ans2.push_back(arr2[mid]);
    array_to_bst(arr2,ans2,start,mid-1);
    array_to_bst(arr2,ans2,mid+1,end);


}
int main(){
    node *root=NULL;
    vector<int>arr={2,10,14,20,25,30,35};
    for(int i=0;i<arr.size();i++){
        root=binarysearch_tree(root,arr[i]);
    }

    /*// logic for minimum distance
    int ans;
    min_dis(root,INT_MIN,ans);
    cout<<ans<<endl;


    // logic for the kth sum of smallest elements
    int sum=0;
    int k=3;  //for suppose
    kthsumof_smallest(root,sum,k);
    cout<<sum<<endl;
    

    // next one is sum of first kth largest elements for that we nedd to 
    // follow the same logic but in LNR <-> RNL just reverse

    // logic for the array to bst*/
    int arr2[]={1,2,3,4,5,6};
    vector<int>ans2;
    array_to_bst(arr2,ans2,0,5);
    
}