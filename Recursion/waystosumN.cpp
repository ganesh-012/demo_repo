#include<iostream>
using namespace std;
int ways(int arr[],int n,int sum){
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=ways(arr,n,sum-arr[i]);
    }
    return ans;
}
int main(){
    int arr[]={1,5,6};
    int sum;
    cout<<"enter the sum value"<<endl;
    cin>>sum;
    cout<<ways(arr,3,sum);
}