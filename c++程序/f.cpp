#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int mian()
{
	long long int n,m,j1,t1,j3,t3,t2,j2;
	cin>>n>>m;
 	if(4*n-m==0)
	 {
	 	j1=0;
	 	t1=n;
	 	
	 } 
	 if(j1+t1==n)
	 {
	 	cout<<j1<<t1<<endl;
	 }
	 if(4*n-m>0&&2*n-m>0)
	 {
	 	j2=(4*n-m)/2;
	 	t2=(2*n-m)/2;
	 	
	 }
	 if(j2+t2==n)
	 {
	 	cout<<j2<<t2<<endl;
	 }
	 if(2*n-m==0)
	 {
	 	t3=0;
	 	j3=n;
	 
	 }
	 if(j3+t3==n)
	 {
	 	cout<<j3<<t3<<endl;
	 }
	 
	 
	 
	 else
	 {
	 cout<<"lie"<<endl;
	 } 
	return 1;
	
}
