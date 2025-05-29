#include<iostream>
#include<vector>
using namespace std;
void subsetsum(int arr[],int index,int sum,vector<int>&temp,int n){
    if(index==n){
        temp.push_back(sum);
        return;
    }
    subsetsum(arr,index+1,sum,temp,n);
    subsetsum(arr,index+1,sum+arr[index],temp,n);
}
int main(){
    int arr[]={3,4,5};
    int sum=0;
    vector<int>temp;
    subsetsum(arr,0,sum,temp,3);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}