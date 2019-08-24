#include<iostream>
using namespace std;
int main()
{
	long long int n,a,b,c,m,i;
	cin>>n;
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	m=a*100000+b*10000+c*1000+a*100+b*10+c;
	i=m/7/11/13;
	cout<<i<<endl;
}

