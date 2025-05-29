#include <iostream>
#include <vector>
using namespace std;
void searchinrotatedarray(vector<int>&arr,int target){
    int start=0,end=arr.size()-1,mid,index=-1;
    while(start<=end){
        mid=start+end-start/2;
        if(arr[mid]==target){
            index=mid;
        }else if(arr[mid]>arr[0]){
            if(arr[start]<=target && arr[mid]>=target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(arr[mid]<=target && arr[end]>=target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    cout<<index<<endl;
}
int main(){
    int size,target;
    cout<<"enter the size of the array";
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<"enter the target value";
    cin>>target;
    searchinrotatedarray(arr,target);
}

// 4 5 0 1 2 3 target=1;
// ans->3