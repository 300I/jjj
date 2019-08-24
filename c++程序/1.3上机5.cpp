#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float r1,r2,R;
	cout<<"请输入r1与r2电阻值（空格隔开）："<<endl;
	cin>>r1>>r2;
	R=1/(1/r1+1/r2); 
	printf("并联电阻阻抗=%0.2f\n",R);
	return 0; 
}
