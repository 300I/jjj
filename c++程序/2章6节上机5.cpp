//2章6节上机5 
#include<iostream>
#include<cstdio>
#include<cmath> 
using namespace std;
int main()
{
	double l;
	double xa,ya,xb,yb;
	cout<<"请输入A，B两点坐标："<<endl; 
	scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
	l=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	printf("AB长为=%0.3lf",l);
	return 0;
	
	
} 
