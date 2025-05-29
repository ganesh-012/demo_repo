#include <iostream>
using namespace std;
int print(int arr[] ,int index){

    if(index < 0){
        return 0;
    }
    return arr[index] + print(arr,index-1);
}
int main(){
    int arr[]={3,7,6,2,8};
    int n = sizeof(arr)/4;
    cout<<print(arr,n-1);
}