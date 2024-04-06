#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
 	int x, y;
 	cin>>x>>y;
 	switch(y)   //不能为字符串,小数
 	{
 		case 1:case 3:case 5:case 7:case 8:case 10:case 12:cout<<"31";break;
		case 4:case 6:case 9:case 11:cout<<"30";break;
 		case 2: if (x%400==0||(x%4==0&&x%100!=0)) //判断是否为闰年
			cout<<29;
			else
			cout<<28;
		 break;
	 }
 	return 0 ;  //程序结束

 }