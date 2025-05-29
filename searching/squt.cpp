#include <iostream>
#include <vector>
using namespace std;
void squareroot(int val){
    int start=0,end=val,index=0,mid;
    while(start<=end){
        mid=start+end-start/2;
        if(mid==val/mid){
            index=val;
            break;
        }else if(mid<val/mid){
            index=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<index<<endl;
}
int main(){
    int key;
    cout<<"enter the key";
    cin>>key;
    squareroot(key);
}

// 80 ans:8