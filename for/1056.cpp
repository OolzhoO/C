//角谷猜想
#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
int n;
cin>>n;
for ( ; n!=1; )
{
    if (n%2==1)  //n为奇数时*3+1
    {
        cout<<n<<"*3+1=";
        n=n*3+1;
    }
    else if (n%2==0)  //n为偶数时/2
    {
        cout<<n<<"/2=";
        n/=2;
    }
    cout<<n<<endl;  //每运算完一次n，输出结果
}
cout<<"End";

	return 0 ;  //程序结束
}