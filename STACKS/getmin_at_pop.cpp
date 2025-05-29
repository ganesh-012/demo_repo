#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void getmin_at_pop(vector<int>&arr){
    stack<int>st;
    st.push(arr[0]);
    for(int i=1;i<arr.size();i++){
        st.push(min(arr[i],st.top()));
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}
int main(){
    vector<int>arr={2,1,3,5,0,6};
    getmin_at_pop(arr);
}