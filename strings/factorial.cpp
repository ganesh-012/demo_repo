/*#include <iostream>
#include <vector>
using namespace std;
int factorial(string str){
    int num=str[0]-'0';
    int product=1;
    for(int i=num;i>0;i--){
        product*=i;
    }
    cout<<product;
}
int main(){
    cout<<"enter the number of string";
    string str;
    cin>>str;
    factorial(str);
}

//this is anothor method*/


#include <iostream>
#include <vector>
using namespace std;
void factorial(int N){
    vector<int>arr(1,1);
    int res,carry=0;
    while(N>0){
        for(int i=0;i<arr.size();i++){
            res=arr[i]*N+carry;
            carry=res/10;
            arr[i]=res%10;
        }
        while(carry){
            arr.push_back(carry);
            carry=carry/10;
        }
       N--;
    }
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }
}
int main(){
    cout<<"enter the name of the string";
    int str;
    cin>>str;
    factorial(str);
}