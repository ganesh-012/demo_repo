#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void reverse(vector<char>&s){
    // to push the elements in the stack
    stack<char>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }

    //to get the elements form the stack
    int index=0;
    while(!st.empty()){
        s[index++]=st.top();
        st.pop();
    }
}
int main(){
    vector<char>arr={'h','e','l','l','o'};
    reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}