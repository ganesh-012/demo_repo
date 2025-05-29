#include <iostream>
#include <vector>
using namespace std;
void sortastring(string str){
    vector<int>arr(26,0);
    string ans;
    for(int i=0;i<str.size();i++){
        arr[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(arr[i]){
            ans+=c;
            arr[i]--;
        }
    }
    cout<<ans<<endl;
}
int main(){
    cout<<"enter the string";
    string  str;
    cin>>str;
    sortastring(str);
}