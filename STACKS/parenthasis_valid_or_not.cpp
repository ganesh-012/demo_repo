#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool parenthasis_valid_or_not(string &str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        if(st.empty()){
            st.push(str[i]);
        }else if(str[i]=='('){
            if(st.top()==str[i]){
                st.push(str[i]);
            }else{
                st.pop();
            }
        }else{
            if(st.top()==str[i]){
                st.push(str[i]);
            }else{
                st.pop();
            }
        }
    }


    // we need to check if there is any ele is present the it is not valid else valid
    if(st.empty()){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    string str="()()))))";
    cout<<parenthasis_valid_or_not(str)<<endl;
}