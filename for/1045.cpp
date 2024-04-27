//奥运奖牌计数
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
    int n, gold, age, copper, ng=0, na=0, nc=0,x=0;  //记录天数，金牌数，银牌数，铜牌数，金牌总数，银牌总数，铜牌总数，奖牌总数
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>gold>>age>>copper;
        ng+=gold;
        na+=age;
        nc+=copper;
        x=x+gold+age+copper;
    }
    cout<<ng<<" "<<na<<" "<<nc<<" "<<x;

	return 0 ;  //程序结束
}