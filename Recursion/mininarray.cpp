#include <iostream>
using namespace std;
int minimum(int arr[],int index){
    if(index < 0){
        return INT32_MAX;
    }
    return min(arr[index],minimum(arr,index-1));
}
int main(){
    int arr[]={3,7,6,2,8};
    int n = sizeof(arr)/4;
    cout<<minimum(arr,n-1);
}