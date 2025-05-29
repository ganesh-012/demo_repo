#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    int swapping=0;
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapping=1;
            }
        }
        if(swapping=0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5];
    cout<<"enter the elements";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    bubblesort(arr,5);
}

// 10 4 1 3 2