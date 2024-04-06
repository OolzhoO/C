#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
 	int a;
 	cin>>a;
 	cout<<(a%400==0||(a%4==0&&a%100!=0));
	 	
 	return 0 ;  //程序结束

 }