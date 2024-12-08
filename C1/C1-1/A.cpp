#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;  //使用命名空间
int a[6][6];
int n, m;
int main() {
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
        }
    }

    cin>>n>>m;

    for (int z = 1; z <= 5; z++)
    {
        swap(a[n][z], a[m][z]);
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    }
    
 	return 0 ;  //程序结束
 }