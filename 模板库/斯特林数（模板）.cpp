#include<iostream>
#define ll long long 
//#define s1[1e9+7][1e9+7]=1; for(int i=1;i<=n;++i){s1[i][1]=1;}
using namespace std;
ll n,m,s1[2005][2005],ans;
ll siteling(ll n,ll m)
{
//	s1[1e9+7][1e9+7]=1;
 for(ll i=1;i<=n;++i){s1[i][1]=1;}
	for(ll i=1;i<=n;++i)
	{
		for(ll j=2;j<=i&&j<=m;++j)
		{
			s1[i][j]=(s1[i-1][j-1]+j*s1[i-1][j])%1000000007;
		}
	}
	return s1[n][m];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	ans=siteling(n,m);
	cout<<ans;
	return 0;
} 
