#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="acbcabbacbcababaabc";
    string str2="abc";
    if(str.find(str2)!=string::npos){
        cout<<str.find(str2)<<endl;
    }
    return 0;
}