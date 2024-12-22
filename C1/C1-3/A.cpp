#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;  //使用命名空间
int main() {
    int a[105][105], b[105][105];
    int n, m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>>a[i][j];
        }
    }


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>>b[i][j];
        }
    }


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%5d", a[i][j]+b[i][j]);
        }
        cout<<endl;
    }
    

 	return 0 ;  //程序结束
 }
 