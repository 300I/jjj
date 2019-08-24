#include<cstdio>
using namespace std;
int main()
{
	int r;
	int h;
	double v;
	double pi=3.14;
	scanf("%d%d",&r,&h);
	v=r*r*pi*h;
	int n=20/v;
	printf("n=%d",n);
	return 0; 
	 

} 
