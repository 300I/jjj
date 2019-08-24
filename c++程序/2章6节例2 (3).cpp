#include<cstdio>
#include <iostream>
using namespace std;
const double pi=3.1415926;
int main()
{
	float r,d,c,s;
	printf("请输入半径r：");
	//printf("请输入半径r：\n");
	scanf("%f",&r);
	//cin>>r;
	d=2*r;
	c=2*r*pi;
	s=r*r*pi;
	printf("直径=%0.4f,周长=%0.4f,面积=%0.4f",d,c,s);
	return 0;
}
