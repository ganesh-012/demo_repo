#include <iostream>
using namespace std;
int main(){
    cout<<"enter the string";
    string str;
    string ans;
    cin>>str;
    int i=0;
    while(i<str.size()){
        if(str[i]=='.'){
           ans=ans+"[.]";
        }else{
            ans=ans+str[i];
        }
     i++;
    }
    cout<<ans<<endl;
}
