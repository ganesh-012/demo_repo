#include <iostream>
#include <vector>
using namespace std;
void kthmissingnumber(vector<int>&arr,int n){
    
    int start=0,end=arr.size()-1,mid,ans;
    while(start<=end){
        mid=start+end-start/2;
        if(arr[mid]-mid-1 >=n){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    cout<<ans+n<<endl;
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
    kthmissingnumber(arr,target);
}