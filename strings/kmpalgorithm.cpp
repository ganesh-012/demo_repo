#include <iostream>
#include <vector>
using namespace std;
void kmpalgorithm(string str){
    int pre=0,suf=1;
    vector<int>count(str.size()-1);
    while(suf<str.size()){
        if(str[pre]==str[suf]){
            count[suf]=pre+1;
            pre++,suf++;
        }
        else{
            if(pre==0){
                count[suf]=0;
                suf++;
            }else{
                pre=count[suf-1];             
            }
        }
    }
    cout<<count[str.size()-1];
}
int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    kmpalgorithm(str);
}
