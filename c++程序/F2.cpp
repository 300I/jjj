#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	long int n,m,i,x;//xÎªC±äÁ¿ 
	cin>>n>>m;
	if(n==0)
	{
		i=m/4;
		cout<<i<<endl;
	} 
	if(n>0)
	{
		x=n*2+m;
		i=x/4;
		cout<<i<<endl;	
	}
	
	return 0;
} 
