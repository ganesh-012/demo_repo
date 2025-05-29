// print all numbers in every window of size k

#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    vector<int>arr={3,6,2,7,8,11};
    int k;
    cout<<"enter the value of the k";
    cin>>k;
    queue<int>q;
    // we need the push the k-1 values into the queue
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }

    for(int i=k-1;i<arr.size();i++){
        q.push(arr[i]);
        display(q);  // to print the values
        q.pop();
    }
}