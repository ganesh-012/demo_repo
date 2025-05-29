#include <iostream>
#include <vector>
using namespace std;
void minimuminrotatedarray(vector<int>&arr){
    int start=0,end=arr.size()-1,mid,index;
    while(start<=end){
        mid=start+end-start/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            index=arr[mid];
            end=mid-1;
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
    minimuminrotatedarray(arr);
}


// 4 6 8 0 1 2 
//ans -> 0;