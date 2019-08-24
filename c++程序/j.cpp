#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int w,h,i,j;
	char a;
	cin>>w>>h>>a;
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		{		
		if(i==0||i==h-1||j==0||j==w-1)
		cout<<a;
		else
		cout<<" ";
		}
		cout<<endl;
	}
	
} 
