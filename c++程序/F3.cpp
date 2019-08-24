#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,m,j,t,j1,t1;
	cin>>n>>m;
	for(t1=0;t1<=n;++t1)
	for(j1=0;t1<=n;++j1)
	if((m-2*n)/2==t1&&(m-4*n)/2==j1)
	{
		j=(m-4*n)/2;
		t=(m-2*n)/2;
		cout<<j<<t<<endl;	
 }
	if((m-2*n)/2<t1||(m-2*n)/2>t1||(m-4*n)/2<j1||(m-4*n)/2>j1)
	{
		cout<<"lie"<<endl;
	}
}
