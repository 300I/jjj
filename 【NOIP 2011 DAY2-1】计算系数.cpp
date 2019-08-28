#include<iostream>
#define ll long long
using namespace std;
ll a,b,k,n,m,ans;
ll power(ll a,ll b)
{
	ll ans=1,base=a;
	while(b!=0)
	{
		if(b&1!=0)
		{
			ans=(base*ans)%10007;
		} 
			base=(base*base)%10007;
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
	if(b>a-b)
	{
		b=a-b;
	}
	ll a1=1,b1=1; 
	for(ll i=0;i<b;++i)
	{
		a1=(a1*(a-i))%10007;
		b1=(b1*(b-i))%10007;
	}
	return (a1*power(b1,10005))%10007;
}
int main()
{
	cin>>a>>b>>k>>n>>m;
	ans=(c(k,n)*power(a,n)*power(b,m))%10007;
	cout<<ans;
	return 0;
}
