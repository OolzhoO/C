//数字统计
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	long long num,temp,x=0, y;  //num为最大值 temp为最小值 x是2的数量 y为临时变量
    cin>>temp>>num;
    for (int i = temp; i <= num; i++)  //i逐渐递增 y=i用于计算
    {
        y=i;
        while (y)
        {
            if (y%10==2)  //y的每一位有2时x加1
            {
                x++;
            }
            y/=10;
        }
    }
    cout<<x;
    
 	return 0 ;  //程序结束

 }