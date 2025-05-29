/*#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int ticket[]={1,5,2,3,7};
    int k,n=5,time=0;
    cout<<"enter the value of the k";
    cin>>k;
    queue<int>q;
    for(int i=0;i<n;i++){   // n is the size of the array
        q.push(i);
    }
    while(!ticket[k]==0){
        ticket[q.front()]--;
        time++;
        if(!ticket[q.front()]==0){
            q.push(q.front());
        }
        q.pop();
    }
    cout<<time<<" : is the time required to get the ticket";
}*/


// 2nd method to solve;

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int ticket[]={1,5,2,3,7};
    int k,n=5,time=0;
    cout<<"enter the value of the k";
    cin>>k;
    for(int i=0;i<=k;i++){
        time+=min(ticket[i],ticket[k]);
    }
    cout<<time<<endl;
    for(int i=k+1;i<n;i++){
        time+=min(ticket[i],ticket[k]-1);
    }
    cout<<time<<" : is the time required to get the ticket";
}

