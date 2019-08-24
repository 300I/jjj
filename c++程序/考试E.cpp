#include<iostream>
using namespace std;
int main()
{
	long long int s,h,m,c; 
	cin>>s;
	h=s/3600;
	m=(s%3600)/60;
	c=(s%3600)%60;
	cout<<h<<":"<<m<<":"<<c<<endl;
	return 0;
	
}
