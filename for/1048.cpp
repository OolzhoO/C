//整数的个数
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
    int k, x, x1=0, x5=0, x10=0;
    cin>>k;
    for (int i = 1; i <= k; i++)
    {
        cin>>x;
        switch (x)
{
        case 1:;
            x1++;
            break;
        case 5:
            x5++;
            break;
        case 10:
            x10++;
            break;
default:
    break;
}
        }
    cout<<x1<<endl
        <<x5<<endl
        <<x10<<endl;

	return 0 ;  //程序结束
}