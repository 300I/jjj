#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double ab,ac,cb,s,p;
	ab=sqrt((1-2)*(1-2)+(1-2)*(1-2));
	ac=sqrt((1-3)*(1-3)+(1-3)*(1-3));
	cb=sqrt((2-3)*(2-3)+(2-3)*(2-3));
	p=(ab+ac+cb)/2;
	s=sqrt(p*(p-ab)*(p-ac)*(p-cb));
	printf("s=%0.2lf",s);
	return 0;
} 
