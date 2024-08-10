#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
    int A[105], n,temp;
    cin>>n;
    temp=n;
    while (n)
    {
        cin>>A[n];
        n--;
    }
    for (int i = 1; i <= temp; i++)
        cout<<A[i]<<" ";
    

 	return 0 ;  //程序结束

 }
 