#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int shu,yu;
};
bool cmp(node a,node b)
{
	if(a.shu==b.shu)
	{
		return a.yu>b.yu; 
	}
	return a.shu>b.shu;
}
int n;
node a[500005];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%d",&a[i].shu);
	}
	for(int i=1;i<=n;++i)
	{
		scanf("%d",&a[i].yu);
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
		printf("%d %d\n",a[i].shu,a[i].yu);
	}
	return 0;
} 
