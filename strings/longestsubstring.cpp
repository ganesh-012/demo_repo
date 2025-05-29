#include<iostream>
#include<vector>
using namespace std;
void longsubstring(string str){
    int first=0,second=0,len=0;
    vector<bool>count(256,0);
    while(second<str.size()){
        while(count[str[second]]){
            count[str[first]]=0;
            first++;
        }
        count[str[second]]=1;
        len=max(len,second-first+1);
        second++;
    }
    cout<<len;
}
int main(){
    cout<<"enter the string";
    string str;
    cin>>str;
    longsubstring(str);
}