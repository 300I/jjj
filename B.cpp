#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int a,b,c,x,y,m,n,l,N;
int e_gcd(int a,int b,int &x,int &y)
{
	int d,tmp;
	if(b==0)
	{
	x = 1;
	y=0;
	return a;
	}
	d=e_gcd(b,a%b,x,y);
	tmp=x;
	x=y;
	y=tmp-a/b*y;
	return d;
}
int main()
{
	ios_base :: sync_with_stdio(false);
	cin>>N;
	for(int i=1;i<=N;++i)
	{
	cin>>x>>y>>m>>n>>l;
		int d, t, k;
		d=e_gcd(m-n,l,t,k);
	    if((y-x)%d!=0)
		{
			cout<<"Impossible"<<endl;
			continue;
		}
		t=t*(y-x)/d;
		if(t>0)
		{
			t=t%abs(l/d);
		}
		if(t<0)
		{
			while(1)
			{
				t+=abs(l/d);
				if(t>=0)
				{
					break;
				}
			}
		}
		cout<<t<<endl;
	}
	return 0;
}

