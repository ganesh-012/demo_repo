#include <iostream>
#include <vector>
using namespace std;
void addstring(string str1,string str2){
    string ans;
    char c;
    int carry=0,sum=0;
    int first=str1.size()-1;
    int second=str2.size()-1;
    while(second>=0){
        sum=str1[first]-'0'+str2[second]-'0'+carry;
        carry=sum/10;
        c='0'+sum%10;
        ans+=c;
        cout<<ans<<endl;
        first--,second--; 
    }
    cout<<str2[second];
    while(first>=0){
        sum=str1[first]-'0'+carry;
        carry=sum/10;
        c='0'+sum%10;
        ans+=c;
        cout<<ans<<endl;
        first--;
    }
    if(carry){
        ans+='1';
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
int main(){
    cout<<"enter the string1";
    string str1,str2;
    cin>>str1;
    cout<<"enter the string 2";
    cin>>str2;
    addstring(str1,str2);
}