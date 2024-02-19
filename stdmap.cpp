#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> mp;
    mp['c']=20;
    mp['c']=30;
    cout<<mp['c']<<endl;
    
    //迭代器
    mp['m']=20;
    mp['p']=30;
    mp['k']=40;
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    //输出：ckmp，因为map会自动完成从小到大排序
    

}
