#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    string str="ababdc";
    string ans=" ";
    vector<int>repiting(26,0);
    queue<int>q;
    for(int i=0;i<str.size();i++){
        if(repiting[str[i]-'a']>=1){
            repiting[str[i]-'a']++;
            while(!q.empty() && repiting[q.front()-'a']>1){
                q.pop();
            }
            if(q.empty()){
                ans+="#";
            }else{
                ans+=q.front();
            }
        }else{
            repiting[str[i]-'a']++;
            q.push(str[i]);
            while(repiting[str[q.front()]-'a']>=1){
                q.pop();
            }
            ans+=q.front();
        }
    }

    // to print the values of the ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
