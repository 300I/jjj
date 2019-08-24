#include<bits/stdc++.h>
using namespace std;
int s[100000],a[100000],t=0,minx=0;
int main()
{
	int n,r;
	cin>>n>>r;
	memset(s,0,sizeof(s));
	for(int i=1;i<=n;++i)
	{
		cin>>s[i];
	}
	sort(s+1,s+n+1);
	for( int i=1,j=0;i<=n;i++)
	{
		j++;
		if(j==r+1)
		{			
		j=1;
		}
		 s[j]+=a[i];
	   	 minx+=s[j];
	}
	cout<<minx;
}
