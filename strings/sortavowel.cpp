#include <iostream>
#include <vector>
using namespace std;
void sortavowel(string str){
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            lower[str[i]-'a']++;
            str[i]='#';
        }else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            upper[str[i]-'A']++;
            str[i]='#';
        }
    }
    string ans;
    for(int i=0;i<26;i++){
        char c='A'+i;
        while(upper[i]){
            ans+=c;
            upper[i]--;
        }
    }
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(lower[i]){
            ans+=c;
            lower[i]--;
        }
    }
    int j=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='#'){
            str[i]=ans[j++];
        }
    }
    cout<<ans<<endl;
    cout<<str<<endl;
}
int main(){
    cout<<"enter the string";
    string str;
    cin>>str;
    sortavowel(str);
}