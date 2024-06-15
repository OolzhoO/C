#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	int a;
 	cin>>a;
 	cout<<(a%400==0||(a%4==0&&a%100!=0));
	cout<<endl<<setw(7)<<setfill('*')<<1234; //设定字符串长度，空位用*填充
 	return 0 ;  //程序结束

 }