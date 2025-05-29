#include <iostream>
using namespace std;
int power(int num,int n){
    if(n==1){
        return num;
    }
    return num*power(num,n-1);
}
int main(){
    int n,num;
    cout<<"enter the number";
    cin>>num;
    cout<<"enter the number of times";
    cin>>n;
    cout<<power(num,n);
}