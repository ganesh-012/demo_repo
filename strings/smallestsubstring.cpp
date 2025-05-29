#include <iostream>
#include <vector>
using namespace std;
void smallestsubstring(string str){
    int first=0,second=0,len=str.size(),diff=0;
    vector<int>count(256,0);
    while(second<str.size()){
        if(count[str[second]]==0){
            diff++;
        }  
        count[str[second]]=1;
        second++;
    }
    cout<<diff<<endl;
    for(int i=0;i<256;i++){
        count[i]=0;
    }
    second=0;
    while(second<str.size()){
        while(diff && second<str.size()){
            if(count[str[second]]==0){
                diff--;
            }
            count[str[second]]++;
            second++;

        }
        len=min(len,second-first);
        while(diff!=1){
            len=min(len,second-first);
            count[str[first]]--;
            if(count[str[first]]==0){
                diff++;
            }
            first++;
        }
    }
    cout<<len<<endl;
}






int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    smallestsubstring(str);
}
