#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> se;
    se.insert(3);
    se.insert(5);
    se.insert(5);
    se.insert(32768);
//set只能用迭代器访问
    for(set<int>::iterator it=se.begin();it!=se.end();it++)
        printf("%d ",*it);

    //自动递增，去除重复

    multiset<int> mse;
    mse.insert(3);
    mse.insert(5);
    mse.insert(32768);
    mse.insert(5);
    
//set只能用迭代器访问
    for(multiset<int>::iterator it=mse.begin();it!=mse.end();it++)
        printf("%d ",*it);
    return 0;

}