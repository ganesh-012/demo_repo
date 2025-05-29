#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print_bracket_num(string &str){
    int count=0;
    stack<char>st;
    vector<int>ans;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            count++;
            st.push(count);
            ans.push_back(count);
        }else if(str[i]==')'){
            ans.push_back(st.top());
            st.pop();
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    string str="(aa(bdc))p(dee)";
    print_bracket_num(str);
}