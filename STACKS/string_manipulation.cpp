#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int string_manipulation(vector<string>&str){
    stack<string>st;
    for(int i=0;i<str.size();i++){
        if(st.empty()){
            st.push(str[i]);
        }else if(str[i]!=st.top()){
            st.push(str[i]);
        }else{
            st.pop();
        }
    }
    return st.size();
}
int main(){
    vector<string>str={"ab","ac","da","da","ac","db","ea"};
    cout<<string_manipulation(str)<<endl;
}