#include <iostream>
using namespace std;
int fibnacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibnacci(n-1)+fibnacci(n-2);
    }
}
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    cout<<fibnacci(n);
}