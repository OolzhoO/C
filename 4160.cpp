//判断回文数
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	long long num,temp,x=0;
    cin>>num;
    temp=num;
    while (temp)
    {
        x=x*10+temp%10;
        temp=temp/10;
    }
    if (x==num)
        cout<<"Yes";
    else
        cout<<"No";
    
 	return 0 ;  //程序结束

 }
 