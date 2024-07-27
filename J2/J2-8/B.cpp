#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
    long long choice1, ans, n=0, a;  //定义 第一次的选择 答案 统计正确次数 循环次数
    cin>>a;
    char choice2;
    srand(time(0));  //用时间戳作为随机数种子
    for (int i = 0; i < a; i++)
    {
        ans=1+rand()%3;  //生成1~3的答案
        choice1=1+rand()%3;  //由电脑自动选择1~3的答案
        //更改答案
        choice2='y';
        if (choice2=='y'&& choice1 != ans)
        {
            n++;  //统计成功次数
        }
    }
    cout<<endl<<"更换策略的胜率为"<<1.0*n/a*100<<"%";

 	return 0 ;  //程序结束

 }
 