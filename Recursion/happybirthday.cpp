#include <iostream>
using namespace std;
void recursive(int n){
    if(n==0){
        cout<<"happy birthday"<<endl;
        return;
    }
    cout<<n<<" "<<"days left for birthday"<<endl;
    recursive(n-1);
}
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    recursive(n);
}