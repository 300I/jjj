#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
#include<cmath> 
using namespace std;
const int n=10;	
int a[n+1];
int main()
{
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n-1;++i)
	for(int j=1;j<=n-i;++j)
	if(a[j]<a[j+1])swap(a[j],a[j+1]);
	for(int i=1;i<=n;++i)cout<<" "<<a[i];
	cout<<endl;
	return 0;
	
	
}//i
