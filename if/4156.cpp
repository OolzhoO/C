#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	long x, a, b, c, d;
    cin>>x;
    a=x%10;
    b=x%10000/1000;
    c=x%1000/100;
    d=x%100/10;
    x=a-b-c-d;
    if (x>0)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
    
 	return 0 ;  //程序结束

 }