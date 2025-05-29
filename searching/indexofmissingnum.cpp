#include <iostream>
#include <vector>
using namespace std;
void missingnum(vector<int>&arr,int key){
    int start=0,end=arr.size()-1,index=arr.size(),mid;
    while(start<=end){
        mid=start+end-start/2;
        if(arr[mid]==key){
            index=mid;
            break;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            index=mid;
            end=mid-1;
        }
    }
    cout<<index;
}



int main(){
    int size,key;
    cout<<"enter the size of the array";
    cin>>size;
    cout<<"enter the key";
    cin>>key;
    vector<int>arr(size);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    missingnum(arr,key);
}


// 1 4 6 8 10 14 16 18 ans 5:2