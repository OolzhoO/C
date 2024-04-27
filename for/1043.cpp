//最高的分数
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
    int n, x, m=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        if (x>m)
        {
            m=x;
        }
        
    }
    cout<<m;

	return 0 ;  //程序结束
}