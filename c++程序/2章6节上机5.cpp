//2��6���ϻ�5 
#include<iostream>
#include<cstdio>
#include<cmath> 
using namespace std;
int main()
{
	double l;
	double xa,ya,xb,yb;
	cout<<"������A��B�������꣺"<<endl; 
	scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
	l=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	printf("AB��Ϊ=%0.3lf",l);
	return 0;
	
	
} 
