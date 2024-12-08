#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
    int n, temp[50], m[50];
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>m[i];
        temp[i]=1;
        for (int k = 1; k < i; k++)
        {
            if (m[i]==m[k])
            {
                temp[i]=0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (temp[i]==1)
        {
        cout<<m[i]<<" ";
        }
    }

 	return 0 ;  //程序结束

 }
 