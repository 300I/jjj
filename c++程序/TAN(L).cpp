#include<bits/stdc++.h>
using namespace std;
int a[10001]; 
int cmp(int a,int b)
	{
		return a<b;
	}
int main()
{   
	int n,k;
	cin>>n>>k;
	
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;++i)
	{
		if(k>a[i])
		{
			k+=1;
		}
		if(k<a[i])
		{
			k+=2;
		}
	}
	cout<<k<<endl;
}
