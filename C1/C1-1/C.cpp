#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;  //使用命名空间
int a[105][105],b[105][105];
int m, n, x=0;
int main() {
    cin>>m>>n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }


    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> b[i][j];
        }
    }


    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j]==b[i][j])
            {
                x+=1;
            }
        }
        cout<<endl;
    }

cout<<x;
    
 	return 0 ;  //程序结束
}