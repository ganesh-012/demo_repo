/*
1.it is type of data structure that represent a hierarchial relationship
   between data element called nodes
2.BINARY TREE : it is defined as a tree data structure where each
   node has two atmost 2 children
3.if there is a n nodes in a tree then total edges=n-1

*/


// creating the tree

/*#include<iostream>
#include<queue>
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
int main(){
   queue<node*>q;
   int x,first,second;
   cout<<"enter the value of the root element";
   cin>>x;
   node *root=new node(x);
   q.push(root);
   while(!q.empty()){
      node *temp=q.front();
      q.pop();
      cout<<"enter the value to be put in the left side : ";
      cin>>first;
      if(first!=-1){
         temp->left=new node(first);
         q.push(temp->left);
      }


      cout<<"enter the value to be put in the right side : ";
      cin>>second;
      if(second!=-1){
         temp->right=new node(first);
         q.push(temp->right);
      }

   }
}*/

/*
                           1
                        2           3
                     4    5      6     7
                                    8



*/

// second method for creating the tree

#include<iostream>
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
int main(){
   node *root=binary_tree();
}
