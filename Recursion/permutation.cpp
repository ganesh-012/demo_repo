/* #include<iostream>
#include<vector>
using namespace std;
void permutation(int arr[],vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited){
    if(temp.size()==visited.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            permutation(arr,ans,temp,visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}
int main(){
    int arr[]={2,3,4};
    vector<int>temp;
    vector<vector<int>>ans;
    vector<bool>visited(3,0);
    permutation(arr,ans,temp,visited);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}*/



// 2nd method

#include<iostream>
#include<vector>
using namespace std;
void permutation(vector<int>&arr,vector<vector<int>>&ans,int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        permutation(arr,ans,index+1);
        swap(arr[i],arr[index]);
    }
}
int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    permutation(arr,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}




























