#include<stdio.h>
#include<algorithm>
using namespace std;
unsigned long long n,stp,tmp=1,re,x,s,ans=INT_MAX,check;
int main()
{
	scanf("%lld",&n);
	while(1)
	{
		x=n*tmp;
		check=x;
	   // printf("%lld\n",x);
  		while(x)
		{
			s+=x%10;
			x/=10;
		}
		if(check<=0 or check/tmp!=n)
		{
			printf("%lld",ans);
			return 0;
		}
		else
		{
			ans=min(s,ans);
		}
		s=0;
		tmp++;
		stp++;
		if(stp==5000000)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	printf("%lld",ans);
} 
