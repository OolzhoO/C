//判断是否为二位数
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
	int x;
	cin>>x;
    if (9<x&&x<100)
    {
        cout<<1;
    }
    else
        cout<<0;

 	return 0 ;  //程序结束

 }