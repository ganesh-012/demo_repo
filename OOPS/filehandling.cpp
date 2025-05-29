#include<iostream>
#include<vector>
#include<fstream>
#include<exception>
using namespace std;
int main(){
    /*// ofstream is the class used to write in file
    ofstream fout;

    fout.open("zoom.txt"); // file doesn't present it will create
    fout<<"hello world"; // to write connent in file
    fout.close();

    // if stream is used to read the file

    ifstream fin;
    fin.open("zoom.txt");
    char c;
    while(!fin.eof()){
        cout<<c;
        c=fin.get(); // this will move the pointer by one like i++
    }
    fin.close();

    */
    vector<int>arr(5);
    cout<<"enter the ele in the arr";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    // to open the file we need create a class with object
    ofstream fout;
    // to open  the file
    fout.open("zoom.txt"); // we can give path
    // to write the values in file we need to use fout
    fout<<"original data\n";
    for(int i=0;i<arr.size();i++){
        fout<<arr[i]<<" ";
    }
    fout<<"\nsorted data\n";
    for(int i=0;i<arr.size();i++){
        fout<<arr[i]<<" ";
    }
    fout.close();


    //if stream is used to read the value
    ifstream fin;
    // to open the file
    fin.open("zoom.txt");
    char c;
    while(!fin.eof()){  // another way to get it
        cout<<c;        // string line;
        c=fin.get();    // while(getline(fin,line))
                          // cout<<line<<endl;
    } 
    

    fin.close();
}