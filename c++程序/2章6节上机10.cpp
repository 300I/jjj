#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double a,b,c,p,s;
	cin>>a>>b>>c;
	
	if((a+b)>c&&(a+c)>b&&(b+c)>a)
	{
	
	p=(a+b+c)/2; 
	s=sqrt(p*(p-a)*(p-b)*(p-c)); 
	printf("���������Σ����Ϊ=%0.2lf",s);
}
	else
	cout<<"�ⲻ�������Ρ�"<<endl; 
	return 0;
} 
