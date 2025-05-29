#include <iostream>
using namespace std;
bool checkifpalindrome(string str,int first,int second){
    if(first>=second){
        return 1;
    }
    if(str[first]!=str[second]){
        return 0;
    }
    return checkifpalindrome(str,first+1,second-1);
}
int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    cout<<checkifpalindrome(str,0,str.size()-1);
}



