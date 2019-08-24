#include<cstdio>
#include<iostream>
int main()
{
	int w,h,i,j;
	cin>>w>>h;
	for(i=0;i<h;i++)
	{
		for(j=0;j<w;j++)
		if(i==0||i==h-1||j==0||j==w-1)
		cout<<"* ";
		else<<"  ";
		
	}
	cout<<endl;
} 
