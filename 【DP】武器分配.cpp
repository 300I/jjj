#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int n,a,b,a1[808],b1[808],f[88][88][88],x,y,z,v,ooo,oooo;
int main()
{
	scanf("%d%d%d",&n,&a,&b);
	for(int i=1;i<=a;++i)
	{
		scanf("%d",&a1[i]);
	}
	sort(a1+1,a1+1+a);
	for(int i=1;i<=b;++i)
	{
		scanf("%d",&b1[i]);
	}
	sort(b1+1,b1+1+b);
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=a;++i)
	{
		for(int j=1;j<=b;++j)
		{
				f[i][j][0]=0;
		}
	}
//	f[0][0][0]=0;
	for(int k=1;k<=n;++k)
	for(int i=k;i<=a;++i)
	for(int j=k;j<=b;++j)
	{
	//x=
	//	y=
		//z=
		//v=f[i-1][j-1][k-1]+(a[i]-b[j])*(a[i]-b[j]);
	//	ooo=;
	//	oooo=min(f[i][j-1][k],f[i-1][j-1][k-1]+(a1[i]-b1[j])*(a1[i]-b1[j]));
		f[i][j][k]==min(min(f[i-1][j-1][k],f[i-1][j][k]),min(f[i][j-1][k],f[i-1][j-1][k-1]+(a1[i]-b1[j])*(a1[i]-b1[j])));
		//cout<<f[i][j][k]<<endl;
	}
	printf("%d",f[a][b][n]);
} 
