#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
queue<int>boy;
queue<int>girl;
int m,n,k;
int main()
	{
		scanf("%d%d%d",&n,&m,&k);
		for(int i=1;i<=n;i++) 
			boy.push(i);
		for(int i=1;i<=m;i++) 
			girl.push(i);
		for(int i=1;i<=k;i++)
			{
				printf("%d %d\n",boy.front(),girl.front());
				boy.push(boy.front());
				girl.push(girl.front());
				boy.pop();
				girl.pop();
			}
		return 0;
} 
