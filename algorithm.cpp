#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[10]={10,11,21,32,23,43};
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);

    }
    reverse(a,a+4);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);

    }
    //reverse,swap可用，输入的都是地址

    
}
