//区间内所有奇数
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
    int  n, m;
    cin>>n>>m;
    for (int i = n; i <= m; i++)
    {
        if (i%2==1)
        {
            cout<<i<<" ";
        }
        
    } 
    
	 	
 	return 0 ;  //程序结束

 }