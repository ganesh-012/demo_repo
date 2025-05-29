#include <iostream>
using namespace std;
void clockwise(string str1){
    char c=str1[str1.size()-1];
    for(int i=str1.size()-2;i>=0;i--){
        str1[i+1]=str1[i];
        cout<<str1<<endl;
    }
    str1[0]=c;
    cout<<str1<<endl;
}
void anticlockwise(string str2){
    char c=str2[0];
    for(int i=0;i<str2.size();i++){
        str2[i]=str2[i+1];
    }
    str2[str2.size()-1]=c;
    cout<<str2<<endl; 
}
int main(){
    cout<<"enter the string";
    string  str;
    cin>>str;
    anticlockwise(str);
}