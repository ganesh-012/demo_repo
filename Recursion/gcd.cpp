#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    cout<<"enter the value of a";
    int a,b;
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<gcd(a,b);
}