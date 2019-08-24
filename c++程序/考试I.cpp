#include<iostream>
using namespace std;
int main()
{
	int n,x,y,i,k;
	cin>>n>>x>>y;
	if(y%x==0)
	{
		i=n-(y/x);
		cout<<i<<endl;
	}
	else
	{
		k=n-(y/x)-1;
		cout<<k<<endl;
	}
}

 
 
 
