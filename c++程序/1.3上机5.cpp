#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float r1,r2,R;
	cout<<"������r1��r2����ֵ���ո��������"<<endl;
	cin>>r1>>r2;
	R=1/(1/r1+1/r2); 
	printf("���������迹=%0.2f\n",R);
	return 0; 
}
