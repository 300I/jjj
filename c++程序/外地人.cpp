#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int m,n;
struct node{
	string e,sa;
};
struct shit{
	string k;
	int stp=0;
};
shit a[100005];
node s[100005];
int main()
{
	ios_base :: sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>s[i].e>>s[i].sa;
	}
	for(int i=1;i<=m;++i)
	{
		cin>>a[i].k;
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			if(s[i].sa==a[j].k)
			{
				cout<<s[i].e<<endl;
				a[j].k="tycshidalao";
				
			}
			if(a[j].k != "tycshidalao" && s[i].sa != a[j].k)
			{
				a[j].stp++;
			}
			if(a[j].k!="tycshidalao"&&s[i].sa!=a[j].k&&a[j].stp==n)
			{
				cout<<"eh"<<endl;
			}
		}
	}
}
