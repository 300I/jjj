#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int h,w;
char c[500][505];
int a[1005][505],stp=0,sh,sw,o;
int main()
{
	scanf("%d%d",&h,&w);
	//cin>>h>>w;
	for(int i=1;i<=h;++i)
	{
		for(int j=1;j<=w;++j)
		{
			cin>>c[i][j];
			if(c[i][j]=='#')
			{
				a[i][j]=2;
			}
			if(c[i][j]=='.')
			{
				a[i][j]=1;
			}
		}
	}
/*for(int i=1;i<=h;++i)
	{
		for(int j=1;j<=w;++j)
		{
			cout<<c[i][j];
		//	cout<<a[i][j];
		}
	}*/

	for(int i=1;i<=h;++i)
	{
		for(int j=1;j<=w;++j)
		{
			if(a[i][j]==1||a[i][j]==0)
			{
				stp++;
				if(stp==w&&j==w)
				{
					sw++;
					for(int v=1;v<=w;++v)
					{
						a[i][v]=0;
					}
					stp=0;
				}
				if(stp!=w&&j==w)
				{
					stp=0;
				}
				else
                {
                    a[i][j]=a[i][j];
                    stp=stp;
				}
		   }
		  if(a[i][j]==2)
		   {
                stp=0;
		   }
		}
	}
	for(int j=1;j<=w;++j)
	{
		for(int i=1;i<=h;++i)
		{
			if(a[i][j]==1||a[i][j]==0)
			{
				stp++;
				if(stp==h&&i==h)
				{
				    //cout<<"st"<<endl;
                       // cout<<i<<endl;
					for(int v=1;v<=h;++v)
					{
						a[v][j]=0;
					}
					stp=0;
				}
				if(stp!=h)
				{
				    a[i][j]=a[i][j];
				}
				if(i==h&&stp!=h)
                {
                    stp=0;
                }
			}
			if(a[i][j]==2)
			{
			   stp=0;
			   a[i][j]=a[i][j];
			}
		}
	}
	stp=0;
	for(int i=1;i<=h;++i)
	{
		for(int j=1;j<=w;++j)
		{
		if(a[i][j]==2)
			{
				o=0;
				cout<<"#";
				stp++;
				if(stp==w)
				{
					cout<<endl;
					stp=0;
				}
			}
			if(a[i][j]==1)
			{
				o=0;
				cout<<".";
				stp++;
				if(stp==w)
				{
					cout<<endl;
					stp=0;
				}
			}
			if(a[i][j]==0)
			{
				stp++;
				o++;
				if(stp==w&&o<w)
				{
					cout<<endl;
					stp=0;
					o=0;
				}
				if(stp==w&&o==w)
				{
					o=0;
					stp=0;
				}
			}
			//cout<<a[i][j];
		}
		//cout<<endl;
	}
}

