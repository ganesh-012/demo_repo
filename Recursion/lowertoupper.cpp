#include <iostream>
using namespace std;
void lowertoupper(string &str,int index){
    if(index <0 ){
        return;
    }
    char c = 'A'+ str[index]-'a';
    str[index] =c;
    lowertoupper(str,index-1);
}
int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    lowertoupper(str,str.size()-1);
    cout<<str<<endl;
}