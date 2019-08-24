#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,l=0x3f3f3f3f,r,ans,sum,mid;
int a[100080];
bool isok(int t)
{
	int cnt=0,k=1,tmp=1;
	while(k<=n)
	{
		cnt+=a[k];
		if(cnt>t)
		{
			cnt=a[k];
			tmp++;
		}
		k++;
	}
	if(tmp>m)
	{
		return false;
	}
	return true;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i)
	{
		scanf("%d",&a[i]);
		l=min(a[i],l);
		sum+=a[i];
	}
     r=sum * 2;
     while(l<=r)
     {
     	mid=(l+r)/2;
     	if(isok(mid))
     	{
     		r=mid-1;
     		ans=mid;
		 }
		 else
		 {
		 	l=mid+1;
		 }
	 }
	 printf("%d",ans);
}
