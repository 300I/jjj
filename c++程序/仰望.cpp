#include <cstdio>
#include <stack>
using namespace std;
stack<int>st; int n,x,a[100001],ans[100001];
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
	scanf("%d",&a[i]);}
    for (int i=n;i>=1;i--){//倒序入栈 
        while (st.size()&&a[st.top()]<=a[i]) //如果栈为空&&栈顶元素<=栈内元素 
		st.pop();//删除栈顶元素 
        if (!st.size())//如果没有栈内元素
			{ 
		 		ans[i]=0; //答案为0
		 	} 
		 else//如果栈中有元素
		 { 
		 	ans[i]=st.top();//答案为返回栈顶的值 
		 } 
        st.push(i);//将i从栈顶压入 
    }
    for (int i=1;i<=n;i++) 
	{ 
	printf("%d\n",ans[i]);
	} 
    return 0;
}
