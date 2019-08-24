#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int a[10005],n,i,j,top=0;
stack<int>s;
int main()
{
	cin>>n;
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
		}
		i=j=1;
		while(i<=n)
		{
			s.push(i);
				while(s.size()>0 && s.top()==a[j])
				{
					s.pop();
					j++;
				}
			i++;
		}
		if(s.size()==0)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
} 
