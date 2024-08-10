//计算书费
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
    double A[10]={28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65}, x=0;
    int temp;
for (int i = 0; i < 10; i++){
    cin>>temp;
    x+=A[i]*temp;
}
cout<<fixed<<setprecision(1); //保留一位小数
cout<<x;

 	return 0 ;  //程序结束

 }
 