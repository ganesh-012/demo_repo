#include<iostream>
#include<vector>
using namespace std;
void countingparenthasis(int n,int left,int right,vector<string>&ans,string &temp){
    if(left+right==2*n){
        ans.push_back(temp);
        return;
    }
    if(left<n){
        temp.push_back('(');
        countingparenthasis(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    if(right<left){
        temp.push_back(')');
        countingparenthasis(n,left,right+1,ans,temp);
        temp.pop_back();
    }

}
int main(){
    int n;
    cout<<"enter the values of n";
    cin>>n;
    vector<string>ans;
    string temp;
    countingparenthasis(n,0,0,ans,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}