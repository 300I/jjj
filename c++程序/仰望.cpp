#include <cstdio>
#include <stack>
using namespace std;
stack<int>st; int n,x,a[100001],ans[100001];
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
	scanf("%d",&a[i]);}
    for (int i=n;i>=1;i--){//������ջ 
        while (st.size()&&a[st.top()]<=a[i]) //���ջΪ��&&ջ��Ԫ��<=ջ��Ԫ�� 
		st.pop();//ɾ��ջ��Ԫ�� 
        if (!st.size())//���û��ջ��Ԫ��
			{ 
		 		ans[i]=0; //��Ϊ0
		 	} 
		 else//���ջ����Ԫ��
		 { 
		 	ans[i]=st.top();//��Ϊ����ջ����ֵ 
		 } 
        st.push(i);//��i��ջ��ѹ�� 
    }
    for (int i=1;i<=n;i++) 
	{ 
	printf("%d\n",ans[i]);
	} 
    return 0;
}
