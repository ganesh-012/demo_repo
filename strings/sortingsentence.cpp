#include <iostream>
#include <vector>
using namespace std;
void sortingsentence(string str){
    string temp;
    int index,count;
    vector<string>ans(10);
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
           index=temp[temp.size()-1];
           temp.pop_back();
           ans[index]=temp;
           temp.clear();
           count++;
        }else{
           temp+=str[i];
        }
        index=temp[temp.size()-1];
        temp.pop_back();
        ans[index]=temp;
        temp.clear();
        count++;
        for(int i=0;i<=count;i++){
            temp+=ans[i];
            temp+=' ';
        }
        temp.pop_back();
    }
    cout<<temp<<endl;
}
int main(){
    cout<<"enter the string";
    string str;
    cin>>str;
    sortingsentence(str);
}