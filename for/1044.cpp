//最大跨度值
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
    int n, x, max=0, min=1000;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        if (x>max)
        {
            max=x;
        }
        else if (x<min)
        {
            min=x;
        }
        
        
    }
    cout<<max-min;

	return 0 ;  //程序结束
}