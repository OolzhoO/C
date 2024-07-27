#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;  //使用命名空间
int main() {
    int choice1, ans;
    char choice2;
    srand(time(0));  //用时间戳作为随机数种子
    ans=1+rand()%3;  //生成1~3的随机数
    cout<<"请选择一扇门"<<endl;
    cin>>choice1;
    for (int i = 1; i <= 3; i++)
    {
        if (i!=choice1 && i!= ans)
        {
            cout<<i<<"号门后是羊";
            break;
        }
    }
    cout<<"更改原来的选择输入y，保持原来的选择输入n"<<endl;
    cin>>choice2;
    if (choice2=='y')
    {
        if (choice1==ans)
            cout<<"失败!";
        else cout<<"成功!";
    }
    else{
        if (choice1==ans)
            cout<<"成功!";
        else cout<<"失败!";
    }
    

 	return 0 ;  //程序结束

 }
 