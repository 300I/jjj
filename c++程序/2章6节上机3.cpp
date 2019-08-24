//2章6节上机3
#include<iostream>
using namespace std;
int main()
{
	int n;
    cout<<"请输入一个三位数："<<endl; 
	cin>>n;
	int b=n/100;
	int s=(n/10)%10;
	int g=n%10;
	int m=100*g+s*10+b;

	
	cout<<"m="<<m<<endl;
	return 0;
} 
