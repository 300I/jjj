#include<cstdio>
#include <iostream>
using namespace std;
const double pi=3.1415926;
int main()
{
	float r,d,c,s;
	printf("������뾶r��");
	//printf("������뾶r��\n");
	scanf("%f",&r);
	//cin>>r;
	d=2*r;
	c=2*r*pi;
	s=r*r*pi;
	printf("ֱ��=%0.4f,�ܳ�=%0.4f,���=%0.4f",d,c,s);
	return 0;
}
