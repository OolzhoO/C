//青蛙儿歌
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
 int main() {
    int  n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
            cout<<i<<"只青蛙"<<i<<"张嘴，"<<2*i<<"只眼睛"<<4*i<<"条腿。"<<endl;
    }
    
	return 0 ;  //程序结束
}