#include<iostream>
#include<cstring>
using namespace std;
string s[60005];
int ls,a,b,k,stpa,stpb;
int main()
{
	for(int i=1;;++i)
	{
		char a;
		cin>>a;
		if(a!='E')
		{
			s[i]=a;
		}
		else
		{
			ls=i-1;
			break;
		}
	}
/*	for(int i=1;i<=ls;++i)
	{
		cout<<s[i];
	}*/
//	cout<<ls;
	if(ls<=11)
	{
		for(int i=1;i<=ls;++i)
		{
			if(s[i]=="W")
			{
				a++;
			}
			else
			{
				b++;
			}
		}
		cout<<a<<":"<<b<<endl;
		cout<<a<<":"<<b;
		return 0;
	}
	for(int i=1;i<=ls;++i)
	{
		if(i*11>ls)
		{
			stpa=(i-1)*11;
		}
	}
	for(int i=1;i<=ls;++i)
	{
		if(i*21>ls)
		{
			stpb=(i-1)*21;
		}
	}
	if(ls>11)
	{
		for(int i=1;i<=ls;++i)
		{
			if(i<=stpa)
			{
			if(s[i]=="W"&&i%11!=0)
			{
				a++;
			}
			if(s[i]=="L"&&i%11!=0)
			{
				b++;
			}
			if(i%11==0&&s[i]=="W")
			{
				a++;
				cout<<a<<":"<<b<<" "<<i<<endl;
				a=0;
				b=0;
			}
			if(i%11==0&&s[i]=="L")
			{
				b++;
				cout<<a<<":"<<b<<" "<<i<<endl;
				a=0;
				b=0;
			}
			}
			else
			{
				a=0;
				b=0;
				cout<<"j";
				for(int j=i;j<=ls;++j)
				{
					//cout<<"j";
					if(s[j]=="W")
					{
						a++;
					}
					if(s[j]=="L")
					{
						b++;
					}
				}
				cout<<a<<":"<<b<<endl;
				a=0;
				b=0;
				break;
			}
		}
		cout<<" "<<endl;
		k=0;
		for(int i=1;i<=ls;++i)
		{
			if(ls-i>21)
			{
			if(s[i]=="W"&&i%21!=0)
			{
				a++;
			}
			if(s[i]=="L"&&i%21!=0)
			{
				b++;
			}
			if(i%21==0&&s[i]=="W")
			{
				a++;
				cout<<a<<":"<<b<<endl;
				a=0;
				b=0;
			}
			if(i%21==0&&s[i]=="L")
			{
				b++;
				cout<<a<<":"<<b<<endl;
				a=0;
				b=0;
			}
		}
			else
			{
				a=0;
				b=0;
				for(int j=i;j<=ls;++j)
				{
					if(s[j]=="W")
					{
						a++;
					}
					else
					{
						b++;
					}
				}
				cout<<a<<":"<<b<<endl;
				a=0;
				b=0;
				break;
			}
		}
	}
	return 0;
}
