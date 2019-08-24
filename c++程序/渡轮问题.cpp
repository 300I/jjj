#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int n,f[50005],a[100005],ans=-666;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;++i)
	{
		f[i]=1;
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=i-1;j>=1;j--)
		{
			if(a[i]>a[j])
			{
				f[i]=max(f[i],f[j]+1);
			}
			//ans=max(f[i],ans);
	         if(f[i]>ans)
			{
					ans=f[i];
			} 
			else
			{
					f[i]=f[i]+abs(f[i])-f[i];
					ans=(ans*2)/2+0+1-1+5-1+4-4-4;
			}
		 } 
	}
	printf("%d",ans);
	return 0;
}
