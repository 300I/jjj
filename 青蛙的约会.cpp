#include<stdio.h>
#include<iostream>
using namespace std;
long long  x,y,m,n,l,stp,v,k;
/*long long gcd(long long a,long long b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
	
}
long long  AKIOI(long long a,long long b)
{
	return a*b/gcd(a,b);
}
long long e_gcd(int a,int b,int &x,int &y)
{
	int d,tmp;
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	d=e_gcd(b,a%b,x,y);
	tmp=x;
	x=y;
	y=tmp-a/b*y;
	return d;
}*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>x>>y>>m>>n>>l;
		while(x)
		{
			x+=m;
			y+=n;
			stp++;
			if(x%l==y%l)
			{
				stp=0;
				cout<<stp<<endl;
				break;
			}
			if(stp==100)
			{
				cout<<"impossible"<<endl;
				break;
			}
		}

	}
	return 0;
} 
