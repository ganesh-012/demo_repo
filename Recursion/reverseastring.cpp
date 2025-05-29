/*#include <iostream>
using namespace std;
void reverseastring(string str, int index){
    if(index < 0){
        return;
    }
    cout<<str[index];
    reverseastring(str,index-1);
    //cout<<str[index];
}
int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    reverseastring(str,str.size()-1);
}*/

//2nd method


#include <iostream>
using namespace std;
void reverseastring(string &str, int start, int end){
    if(start >= end){
        return;
    }
    char c = str[start];
    str[start]=str[end];
    str[end]=c;
    reverseastring(str,start+1,end-1);
}
int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    reverseastring(str,0,str.size()-1);
    cout<<str<<endl;
}
