#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n,b;
	cin>>n;
	for(i=2;i<=n;++i)
	{
		for(b=1;b<=i;--b)
		//cout<<" ";
		cout<<"*";
		cout<<endl;
	}
	return 0;
	
}
