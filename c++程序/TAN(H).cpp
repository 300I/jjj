#include<bits/stdc++.h>
using namespace std;
int a[10001],step=0,b;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n-1;++i)
	{
		cin>>a[i]; 
	}
	sort(a,a+n);
	for(int j=0;j<=n-1;++j)
	for(int i=0;i<=n-1;++i) 
	{for(int k=0;k<=n-1;++k)
		if(a[i]==a[j])
		{
			a[i]++;
			step+=1;
			b=step/10;
		}
		
	}
	cout<<b<<endl;
}
