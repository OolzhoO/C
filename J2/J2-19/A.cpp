#include<iostream>  //导入头文件
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstdio>
using namespace std;  //使用命名空间
string ID[10];
int passwords[10], n=0;
int main() {
    while (cin>>ID[n])
    {
        cin>>passwords[n];
        n++;
    }
    
        for(int i = 0; i < n; i++)//n 个账号名，一个一个加密
        for(int j = 0; j < ID[i] .length(); j++){
            if(ID[i] .at(j)<=87) ID[i]. at(j)+=3;//偏移量是3(小写)
            else if(ID[i].at(j)<=90) ID[i].at(j)-=23;//xyz
            else if(ID[i].at(j)<=119) ID[i].at(j)+=3;//(大写)
            else if(ID[i].at(j)<=122) ID[i] .at(j)-=23;//XYZ
        }

    cout<<ID[0]<<endl<<passwords[0];
    
 	return 0 ;  //程序结束

 }
 