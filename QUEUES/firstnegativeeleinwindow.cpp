#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int display(queue<int>q){
    while(!q.empty()){
        if(q.front()<0){
            return q.front();
        }
        q.pop();
    }
    return 0;
}
int main(){
    vector<int>arr={2,-3,-4,-2,7,8,9,-10};
    vector<int>ans;  // for storing the ans ele
    int k;
    cout<<"enter the values of k";
    cin>>k;
    queue<int>q;
    // same instalise the k-1 values into the queue
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }

    for(int i=k-1;i<arr.size();i++){
        q.push(arr[i]);
        ans.push_back(display(q));
        q.pop();
    }

    // to print the elements 

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}