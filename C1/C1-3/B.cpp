#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;  //使用命名空间
int a[105][105],b[105][105];
int m, n;
double x;
int main() {
    cin>>m>>n;
    for (int i = 1; i <= m; i++)  //输入a
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }


    for (int i = 1; i <= m; i++)  //输入b
    {
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];
    }


    for (int i = 1; i <= m; i++)  //判断相似数的多少
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j]==b[i][j])
                x++;
        }
    }

printf("%.2f", x/(m*n)*100);  //输出相似度，保留两位小数
    
 	return 0 ;  //程序结束
}