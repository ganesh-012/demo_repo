#include<iostream>
#include<vector>
using namespace std;
void perfectsum(int arr[],int index,int sum,vector<int>&temp,vector<vector<int>>&ans,int n){
    if(index==n){
        if(sum==0){
            ans.push_back(temp);
            return;
        }
        return;
    }
    perfectsum(arr,index+1,sum,temp,ans,n);
    temp.push_back(arr[index]);
    perfectsum(arr,index+1,sum-arr[index],temp,ans,n);
    temp.pop_back();
}
int main(){
    int arr[]={2,5,6,1};
    int sum;
    cout<<"enter the value of the sum";
    cin>>sum;
    vector<int>temp;
    vector<vector<int>>ans;
    perfectsum(arr,0,sum,temp,ans,4);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}