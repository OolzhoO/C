//判断回文数
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	long long num,temp,x,y=1;
    cin>>num;
    for (; y <= num; y++)
    {
        temp=y;
        x=0;
        while (temp)
        {
            x=x*10+temp%10;
            temp=temp/10;
        }
        if (y==x)
        {
            cout<<x<<" ";
        }
        
    }

    
 	return 0 ;  //程序结束

 }