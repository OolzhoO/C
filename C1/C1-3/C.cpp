#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;  //使用命名空间
int a[105][105],b[105][105];
int n, m;
int main() {
    cin>>n>>m;
    for (int i = 1; i <= n; i++)  //输入a
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            b[i][j]=a[n-j+1][i];
        }
    }
    
        for (int i = 1; i <= m; i++)  //输出b
    {
        for (int j = 1; j <= n; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    
 	return 0 ;  //程序结束
}