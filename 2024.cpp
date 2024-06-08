#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
using namespace std;  //使用命名空间
int main() {
 	int x;
    cin>>x;
 if (x%2==0 && (x>10&&x<66))
 {
    cout<<1<<" ";
 }
 else
    cout<<0<<" ";
 if (x%2==0 || (x>10&&x<66))
 {
    cout<<1<<" ";
 }
 else
    cout<<0<<" ";
 if (x%2==0 && !(x>10&&x<66) || !(x%2==0) && (x>10&&x<66))
 {
    cout<<1<<" ";
 }
 else
    cout<<0<<" ";
  if (!(x%2==0 && (x>10&&x<66)))
 {
    cout<<1<<" ";
 }
 else
    cout<<0<<" ";
	 	
 	return 0 ;  //程序结束

 }