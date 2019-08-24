#include<bits/stdc++.h>
using namespace std;
int n,t[1000],j,sum[2000],x=0,r;
int main()
{
	cin>>n>>r;
	
	for(int i=1;i<=n;++i)
	{
	cin>>t[i];
	}
		sort(t+1,t+n+1);
		for(int i=0,k=1;k<=n;++k)
    {
		++i;
		if(i==r+1)
		{		
		  i=1;
		}
		sum[j]+=t[k];
		x+=sum[j];		 	
	}
		cout<<x;
		return 0;
}
