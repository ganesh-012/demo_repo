#include <iostream>
#include <vector>
using namespace std;
void lastposition(vector<int>&arr,int key){
    int start=0,end=arr.size()-1,last=-1,mid;
    while(start<=end){
        mid=start + end-start/2;
        if(arr[mid]==key){
            last=mid;
            start=mid+1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<last<<endl;
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
    lastposition(arr,key);
}
// example: 5 7 7 8 8 10