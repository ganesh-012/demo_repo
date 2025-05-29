#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int end,int mid){
    int left=start,right=mid+1,index=0;
    vector<int>temp(end-start+1);
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++,left++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }

}
void mergesort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end,mid);
}
int main(){
    int arr[5];
    cout<<"enter the elements";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}