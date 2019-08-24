#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int i3,i11,i17;
	const int a=3,b=11,c=17;
	for(i3=1;i3<=17;++i3)
	for(i11=1;i11<=5;++i11)
	for(i17=1;i17<=3;++i17)
	if(i3*3+i11*11+i17*17==100)
	{
		cout<<" "<<i3<<" "<<i11<<" "<<i17<<endl;
	} 
} 
 
