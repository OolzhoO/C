//开关灯
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
 	bool a[5000]={};
    int n, m, temp=0;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        a[i]=1;
    }
    
    for (int i = 1; i <= m; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            if (k%i==0)
            {
                a[k]=!a[k];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i]==0)
        {
            if (temp==0)
            {
                cout<<i;
                temp=1;
            }
            else
                cout<<","<<i;
        }
    }

 	return 0 ;  //程序结束

 }
 