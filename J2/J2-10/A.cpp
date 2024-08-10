#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
    double A[10]={28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65}, B[10], x=0;
    int temp;
for (int i = 0; i < 10; i++)
    cin>>B[i];
for (int y = 0; y < 10; y++)
{
    temp=B[y];
    x+=A[temp];
}
cout<<x;

 	return 0 ;  //程序结束

 }
 