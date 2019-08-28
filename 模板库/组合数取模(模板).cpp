#include<iostream>
#define ll long long
using namespace std;
int n,m,p,ans;
ll power(ll a,ll b,ll c)
{
	ll ans=1,base=a;
	while(b!=0)
	{
		if(b&1!=0)
		{
			ans=(base*ans)%c;
		} 
			base=(base*base)%c;
			b>>=1;
	}
	return ans;
}
ll c(ll a,ll b)
{
	if(a<b)
	{
		return 0;
	}
	if(a==b)
	{
		return 1;
	}
	if(a>a-b)
	{
		b=a-b;
	}
	ll a1=1,b1=1; 
	for(ll i=0;i<b;++i)
	{
		a1=(a1*(a-i))%p;
		b1=(b1*(b-i))%p;
	}
	return (a1*power(b1,p-2,p))%p;
}
ll lcs(ll n,ll m)
{
	if(m==0)
	{
		return 1;
	}
	return c(n%p,m%p)*lcs(n/p,m/p)%p;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m>>p;
	ans=lcs(n,m);
	cout<<ans;
	return 0;
} 
