#include<bits/stdc++.h>
using namespace std;
int a[100010],step=0;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n-1;++i)
	{
		cin>>a[i]; 
	}
	
	sort(a+1,a+n+1);
	{for(int k=0,j=0;k<=n-1,j<=n-1;++k,++j)
		if(a[k]==a[j])
		{
			a[k]++;
			step++;
		}
		
	}
	cout<<step<<endl;
}
