#include <iostream>
#include <vector>
using namespace std;
void bookallocation(vector<int>&arr,int n){
    int start=0,end=0,mid,ans;
    for(int i=0;i<arr.size();i++){
        start=max(start,arr[i]);
        end+=arr[i];
    }
    while(start<=end){
        mid=start+end-start/2;
        int pages=0,count=1;
        for(int i=0;i<arr.size()-1;i++){
            pages+=arr[i];
            if(pages>mid){
                count++;
                pages=arr[i];
            }
        }if(count<=n){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }

    }
    cout<<ans<<endl;
}


int main(){
    int size,n;
    cout<<"enter the size of the array";
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<"enter value of no.of people";
    cin>>n;
    bookallocation(arr,n);
}

//12 34 67 90
//ans->113