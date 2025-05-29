#include<iostream>
#include<vector>
using namespace std;
int targetsum(vector<int>&arr,int index,int n,int target){
    if(index==n){
        if(target==0){     //return target==0 instead of if and else
            return 1;
        }else{
            return 0;
        }
    }
    return targetsum(arr,index+1,n,target) + targetsum(arr,index+1,n,target-arr[index]);
}
int main(){
    int target;
    vector<int>arr={1,0};
    cout<<"enter the value of the target";
    cin>>target;
    cout<<targetsum(arr,0,2,target);
}


// 3,6,4,5 target=12 ans->1