//投资收益
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	double r, m, y, x=0, a=0;
    cin>>r>>m>>y;
    while (x<=y)
    {
        x=m/100.0*r+m;
        m=x;
        a++;
    }
    cout<<a;
    
    return 0 ;  //程序结束

 }
 