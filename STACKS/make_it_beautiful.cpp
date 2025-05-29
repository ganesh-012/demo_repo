#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void make_it_beautiful(vector<int>&arr){
    stack<int>st;
    for(int i=0;i<arr.size();i++){
        if(st.empty()){
            st.push(arr[i]);
        }else if(arr[i]>=0){
            if(st.top()>=0){
                st.push(arr[i]);
            }else{
                st.pop();
            }
        }else{
            if(st.top()<0){
                st.push(arr[i]);
            }else{
                st.pop();
            }
        }
    }
    //now we need to sstore the stack ele in the one vector
    vector<int>ans(st.size());
    int index=st.size()-1;
    while(!st.empty()){
        ans[index--]=st.top();
        st.pop();
    }


    // to print the values
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
int main(){
    vector<int>arr={2,3,4,-4,6,-2,-8,9};
    make_it_beautiful(arr);
}

// ans :[2,9]

/*
    arr=[2,-3,4,-4,6,-2,-8,9]
    ans=[-2,-2]
*/