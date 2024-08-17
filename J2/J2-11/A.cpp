#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
 	int a[15];
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
        if (a[i]<0)
            swap(a[0], a[i]);.
    }
    for (int i = 0; i < 10; i++)
        cout<<a[i]<<" ";
 	return 0 ;  //程序结束

 }
 