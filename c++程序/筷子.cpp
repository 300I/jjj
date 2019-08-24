#include<stdio.h>
#include<algorithm>
using namespace std;
int n,k,f[505][505],a[505];
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i)
	{
		scanf("%d",&a[i]);
	}
	k+=3;
	if(n/2<k)
	{
		printf("-1");
		return 0; 
	}
	sort(a+1,a+1+n);
	f[0][0]=0;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=k;++j)
		{
			if(i==0)
			{
					f[i][j]=0;
			}
			else
			{
				f[i][j]=58018510;
			}
		}
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=k&&j<=i/2;++j)
		{
			f[i][j]=min(f[i-1][j],f[i-2][j-1]+(a[i]-a[i-1])*(a[i]-a[i-1]));
		}
	}
	printf("%d",f[n][k]);
	return 0;
} 
