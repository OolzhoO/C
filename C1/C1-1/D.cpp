#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;  //使用命名空间
int main() {
 	int x[105][105], max[105];
    int an, am , y;
    cin>>an>>am;  //定义n和m
    for (int n = 1; n <= an; n++)  //输入n行m列数字
    {
        for (int m = 1; m <= am; m++)
        {
            cin>>x[n][m];
        }
    }

        for (int n = 1; n <= an; n++)  //比较各行数字大小
    {
        max[n]=0;
        for (int m = 1; m <= am; m++)
        {
            if (x[n][m]>max[n])
            {
                max[n]=x[n][m];
            }
        }
        y+=max[n];
    }
    cout<<y;

 	return 0 ;  //程序结束
 }
 