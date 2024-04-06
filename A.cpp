#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
 	int xa, ya, xb, yb;
	cin>>xa>>ya;
	cin>>xb>>yb;
	cout<<fixed<<setprecision(3); //保留三位小数
	cout<<sqrt(pow(xa-xb,2) + pow(ya-yb, 2));
	 	
 	return 0 ;  //程序结束

 }
 