#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(3);
    q.push(1);
    // to reverse the queue first we need the create stack and push the ele
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    // now copy the values into the queue the we get the reverse
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    // to print the values
    int n=q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }

}