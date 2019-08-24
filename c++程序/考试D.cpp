#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d,m;
	cin>>n;
	a=n/1000;
	b=(n%1000)/100;
	c=(n%100)/10;
	d=n%10;
	m=a+b+c+d;
	cout<<m<<endl;
	
	
} 
