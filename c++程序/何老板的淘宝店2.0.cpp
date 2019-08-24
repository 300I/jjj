#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int pr[100005];int n,ans=0;
struct node
{
	int p,lo;
}no[100005] ;
int so(int x)
{
	int le,ri,mid;
	le=1;
	ri=n;
	while(le<=ri)
	{
		mid=(le+ri)/2;
		if(x==pr[mid])
		{
			return 1;
		}
		if(x>pr[mid])
		{
			le=mid+1;
		}
		else if(x<pr[mid])
		{
			ri=mid-1;
		}	
	}
	return 0;
}
int main()
{
	int m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>pr[i];
	} 
	sort(pr+1,pr+n+1);
	
	for(int i=1;i<=m;++i)
	{
		cin>>no[i].p>>no[i].lo;
	}
	for(int i=1;i<=m;i++)
		{

			if(so(no[i].p))
			{
				 
			   ans+=no[i].p*no[i].lo; 
			}
		}
	cout<<ans;
}
