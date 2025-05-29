#include <iostream>
using namespace std;
int sumofsquares(int n){
    if(n==1){
        return 1;
    }
    return n*n+sumofsquares(n-1);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<sumofsquares(n);
}