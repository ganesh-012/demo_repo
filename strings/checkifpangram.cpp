#include <iostream>
#include <vector>
using namespace std;
void checkifpangram(string str){
    cout<<str<<endl;
    int index;
    vector<int>arr(26,0);
    for(int i=0;i<str.size();i++){
        index=str[i]-'a';
        arr[index]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"not a pangram";
            break;
        }
    }
   
}
int main(){
    cout<<"enter the name of the string"<<endl;
    string alpha;
    cin>>alpha;
    checkifpangram(alpha);
}