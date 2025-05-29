#include <iostream>
using namespace std;
int sumofnumbers(int n){
    if(n==1){
        return 1;
    }
    return n+sumofnumbers(n-1);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<sumofnumbers(n);
}