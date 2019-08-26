#include<iostream>
using namespace std;
int a[105],f[105],n,v;
int main()
{
	ios_base::sync_with_stdio(false);
	for(int i=1;i<=10;++i)
	{
		cin>>a[i];
	}
	cin>>n;
	f[0]=0;
	for(int i=1;i<=104;++i)
	{
		f[i]=INT_MAX;
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=i/2;++j)
		{
			if(i<=10)
			{
				f[i]=min(a[i],f[j]+f[i-j]);
			}
			if(i>10)
			{
				f[i]=min(f[i],f[j]+f[i-j]);
			}
		}
	}
	cout<<f[n];
	return 0;
}

