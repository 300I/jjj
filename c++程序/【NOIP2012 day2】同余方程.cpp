#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<cmath>
using namespace std;
int a,b,x,y;
//long long ;
//string ;

/*struct node{
	
};*/
/*int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}*/
int e_gcd(int a,int b,int &x,int &y)
{
	int d,tmp;
	if(b==0)
	{
		x=1;y=0;return a;
	}
	d=e_gcd(b,a%b,x,y);
	tmp=x;
	x=y;
	y=tmp-a/b*y;
	return d;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>a>>b;
	e_gcd(a,b,x,y);
	if(x>0)x%=b;
	if(x<0)x=(x%b)+b;
	cout<<x;
	return 0;
} 
