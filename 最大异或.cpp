#include<iostream>
#define ll long long 
using namespace std;
ll l,r,tem,ans;
int main()
{
	cin>>l>>r;
    for(int i=60;i>=1;i--)
    {
    	tem=1LL<<i;
    	if(tem>=l+1&&tem<=r)
    	{
    		ans=tem^(tem-1);
    		cout<<ans;
    		return 0;
    	}
    	if(tem<=l)
    	{
    		l=l-tem;
    		r=r-tem;
    	}
    }
	return 0;
}

