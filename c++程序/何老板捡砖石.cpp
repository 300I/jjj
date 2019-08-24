#include<bits/stdc++.h>
using namespace std;
int box[10000001],road[100005],step=1;
queue<int>qq;
int main()
{
 	int n,m;
 	cin>>n>>m;
	 for(int i=1;i<=n;++i)
	 {
	 	cin>>box[i];
	 }	
	 for(int i=1;i<=n;++i)
	 {
	 	cin>>road[i];
	 }
	 sort(box+1,box+n+1);
	 for(int i=1;i<=m;++i)
	 {
	 	if(box[i]<road[i-1])
	 	{
	 		step+=i;
	 		box[i]=road[i-1];
		 }
		 cout<<step<<endl;
	 }
	 
}
