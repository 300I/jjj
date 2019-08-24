#include <cstdio> 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int a,b,c,n,m,k,i,x,y;
	cin>>a>>b>>c;
	if(a>b&&a>c)
   {
   	n=a;m=b;k=c;
   }
   if(b>c&&b>a)
   {
   	n=b;m=a;k=c;
   }
   if(c>a&&c>b)
   {
   	n=c; m=a;k=b;
   }
   i=pow(m,2);
   x=pow(k,2);
   y=pow(n,2);
	 if((a+b)>c&&(a+c)>b&&(b+c)>a&&i+x==y)
	{
	
		
	cout<<"yes"<<endl;}
	if((a+b)<=c&&(a+c)<=b&&(b+c)<=a||i+x<y||i+x>y)
	{
		cout<<"no"<<endl;
	}
}
