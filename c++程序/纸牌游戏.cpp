#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;
queue<int>que;
int main() 
{
	int n,k; 
	cin>>n;
		for(int i=1;i<=n;++i)
		{
			que.push(i);
		}
			while(que.size()!=0)
			{
				printf("%d ",que.front());
				que.pop();
				k=que.front();
				que.push(k);
				que.pop();
			}
			return 0;
}
