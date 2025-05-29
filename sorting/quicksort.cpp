#include<iostream>
#include<vector>
using namespace std;
int quick(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            i++;pos++;
        }
    }
    return pos-1;
}
void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int partition=quick(arr,start,end);
    quicksort(arr,start,partition-1);
    quicksort(arr,partition,end);
}
int main(){
    int arr[7];
    cout<<"enter the elements";
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
        cout<<"hello";
    }
}

// 6 2 5 1 4 2 3 