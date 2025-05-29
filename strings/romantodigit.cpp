#include <iostream>
using namespace std;
int digit(char c){
    if(c =='I'){
        return 1;
    }else if(c =='V'){
        return 5;
    }else if(c =='X'){
        return 10;
    }else if(c =='L'){
        return 50;
    }else if(c =='C'){
        return 100;
    }else{
        return 0;
    }

}
void romantodigit(string str){
    int sum=0;
    for(int i=0;i<str.size();i++){
        if(digit(str[i])>digit(str[i+1])){
            sum=sum+digit(str[i]);
        }else{
            sum=sum-digit(str[i]);
        }
    } 
    cout<<sum;
}
int main(){
    cout<<"enter the name of the string";
    string str;
    cin>>str;
    romantodigit(str);
}