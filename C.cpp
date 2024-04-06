#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
 	char n;
 	int x;
 	cin>>n>>x;
 	cout<<fixed<<setprecision(2);  //保留两位小数
 	switch(n)
 	{
 		case 'P': cout<<x*0.7; break;
 		case 'G': cout<<x*0.8; break;
 		case 'S': cout<<x*0.9; break;
 		default : cout<<x*0.95; break;
	 }
 	return 0 ;  //程序结束

 }