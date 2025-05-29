#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int minaddtomakeparenthesis_valid(string &str){
    stack<char>st;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            st.push(str[i]);
        }else{
            if(st.empty()){
                count++;
            }else{
                st.pop();
            }
        }
    }
    return count+st.size();
}
int main(){
    string str="()))";
    cout<<minaddtomakeparenthesis_valid(str)<<endl;
}