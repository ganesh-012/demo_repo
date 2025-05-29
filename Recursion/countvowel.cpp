#include <iostream>
using namespace std;
int countvowel(string str,int index){
    if(index<0){
        return 0;
    }
    if(str[index]=='a' ||str[index]=='e' || str[index]=='o' || str[index]=='i' || str[index]=='u'){
         return 1+countvowel(str,index-1);
    }
    return countvowel(str,index-1);
}
int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    cout<<countvowel(str,str.size()-1);
}