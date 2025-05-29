#include <iostream>
#include <vector>
using namespace std;

int longestpalindrome(string str){
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<str.size();i++){
        if(str[i] >='a' ){
            lower[str[i]-'a']++;
        }
        upper[str[i]-'A']++;
        
    }
    int count=0,odd=0;
    for(int i=0;i<26;i++){
        if(lower[i]%2==0){
            count+=lower[i];
        }else{
            count+=lower[i]-1;
            odd=1;
        }
        if(upper[i]%2==0){
            count+=upper[i];
        }else{
            count+=upper[i]-1;
            odd=1;
        }
    }
    return count+odd;
}
int main(){
    cout<<"enter the string";
    string str;
    cin>>str;
    cout<<longestpalindrome(str);
}