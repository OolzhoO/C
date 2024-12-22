#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cstring>
using namespace std;  //使用命名空间
int a[105][105];
int n, x, y;
int main() {
    cin>>n>>x>>y;
    for (int i = 1; i <= n; i++)
    {
        cout<<"("<<x<<","<<i<<")"<<" ";
    }
    cout<<endl;

    for (int i = 1; i <= n; i++)
    {
        cout<<"("<<i<<","<<y<<")"<<" ";
    }
    cout<<endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i-j==x-y)
            {
             cout<<"("<<i<<","<<j<<")"<<" ";   
            }
        }
    }
    cout<<endl;

        for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i+j==x+y)
            {
             cout<<"("<<i<<","<<j<<")"<<" ";   
            }
        }
    }
    

 	return 0 ;  //程序结束
 }