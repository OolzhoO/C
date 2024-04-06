#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
	int x, b, w;
	cin>>x;
	b=50+x/3;
	w=x/1.2;

	if (w<b)
	{
		cout<<"Walk";
	}
	else if (b<w)
	{
		cout<<"Bike";
	}
	else
		cout<<"All";
	

 	return 0 ;  //程序结束

 }