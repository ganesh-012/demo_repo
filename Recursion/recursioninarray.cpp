#include <iostream>
using namespace std;
void print(int arr[] ,int index){

    if(index < 0){
        return;
    }
    print(arr,index-1);
    cout<<arr[index]<<" ";
    //print(arr,index-1);
}
int main(){
    int arr[]={3,7,6,2,8};
    int n = sizeof(arr)/4;
    print(arr,n-1);
}