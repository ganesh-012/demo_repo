// sliding window maximum with the dequeue

#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    vector<int>arr={4,3,7,5,2,3,1,2,8,7};
    vector<int>ans;
    int k;
    cout<<"enter the value of the k";
    cin>>k;
    deque<int>q;

    //now we need to copy the k-1 values to the deque
    for(int i=0;i<k-1;i++){
        if(q.empty()){
            q.push_back(i);
        }
        while(!q.empty() && arr[i]>arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }

    // now start the actual implimentation of the window

    for(int i=k-1;i<arr.size();i++){

        //remove the elements which are smaller

        while(!q.empty() && arr[i]>arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);

        //now we also remove the index which the not in the particular window
        while(q.front()<=i-k){
            q.pop_front();
        }

        //now copy the element into the ans array
        ans.push_back(arr[q.front()]);
    }

    // print the ans array
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

