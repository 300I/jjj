#include<stdio.h>
#include<algorithm>
using namespace std;
int n,f[1000005];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		f[i]=i;
	}
	for(int i=1;i<=n;++i)
	{
		int tmp=6;
		while(tmp<=i)
		{
			f[i]=min(f[i-tmp]+1,f[i]);
			tmp*=6;
		}
		tmp=9;
		while(tmp<=i)
		{
			f[i]=min(f[i-tmp]+1,f[i]);
			tmp*=9;
		}
	}
	printf("%d",f[n]);
}
