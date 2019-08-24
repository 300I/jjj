#include<cstdio>
#include<queue>
using namespace std;
	struct wk
	{
		int num;
		int id;//记录当前编号 
	};
	bool operator<(wk a,wk b)
 {
	return a.num>b.num;
 }//重载小于运算符
    priority_queue<wk>q;
    int n,m;
    int main()
	{
    	scanf("%d%d",&n,&m);
        int i,j,a;
        wk x;
      		for(i=1;i<=n;i++)
			{
			    scanf("%d",&x.num);
				x.id=i;
				q.push(x);
            }
		for(i=1;i<=m;i++)
		{
			scanf("%d",&x.num);
				if(x.num>q.top().num)
				{
					printf("%d ",q.top().id);
					q.pop();
					x.id=i+n;
					q.push(x);
				}
		}
	}

