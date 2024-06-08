#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	int n;
    cin>>n;
    if ((100>=n)&&(n>=90))
    {
        cout<<"excellent";
    }
    else if ((89>=n)&&(n>=80))
    {
        cout<<"good";
    }
    else if ((79>=n)&&(n>=70))
    {
        cout<<"secondary";
    }
    else if ((69>=n)&&(n>=60))
    {
        cout<<"pass";
    }
    else if (60>n)
    {
        cout<<"fail";
    }
    
    
    
	 	
 	return 0 ;  //程序结束

 }