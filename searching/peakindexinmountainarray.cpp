#include <iostream>
#include <vector>
using namespace std;
void peakinmountainarray(vector<int>&a){
    int start=0,end=a.size()-1,mid,index;
    while(start<=end){
        mid=start+end-start/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
            index=mid;
        }else if(a[mid]>a[mid-1]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<a[index]<<endl;
}
int main(){
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<"s";
    peakinmountainarray(arr);
}


// 2 4 6 8 10 8 5 
// ans->10