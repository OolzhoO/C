#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
 	int xa, ya, xb, yb;
	cin>>xa>>ya;
	cin>>xb>>yb;
	cout<<fixed<<setprecision(3); //保留三位小数
	cout<<sqrt(pow(xa-xb,2) + pow(ya-yb, 2));
	srand(time(0));  //用时间戳作为随机数种子
	rand()%3+1//生成1~3的随机数
 	return 0 ;  //程序结束

 }
 