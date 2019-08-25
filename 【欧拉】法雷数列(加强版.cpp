#include<iostream>
long long n;
using namespace std;
//long long a=LONG_LONG_MIN;
int eler(long long x)
{
	long long i,ans=x,a=x;
	for(long long i=2;i*i<=a;++i)
	{
		if(a%i==0)
		{
			ans=ans-ans/i;
			while(a%i==0)
			{
				a=a/i;
			}
		}
	}
	if(a>1){
		ans=ans-ans/a;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
//	cin>>n;
/*	for(int i=1;i<=n;++i)
	{
		int s;
		cin>>s;
		cout<<eler(s)<<endl;
	}*/
	cin>>n;
	cout<<eler(n);
	//cout<<a;
	return 0;
}
