#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int value){
    stack<int>temp;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    s.push(value);
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    vector<int>arr={4,3,2,1,8};
    stack<int>st;
    // now push the element into the stack
    for(int i=0;i<arr.size();i++){
        st.push(arr[i]);
    }
    cout<<"enter the number to insert the bottom of the stacck";
    int x;
    cin>>x;
    insertatbottom(st,x);

    // to print the modified stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}