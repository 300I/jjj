//ĳ���г��⳵�շѱ�׼��k��������(��k����)����ÿ����xԪ�շѣ��������k����䳬�����ְ�ÿ����yԪ�շѡ����������˳��ķ��á�������Ҫ�����ʻn��������Ҫ�ķ��á�
#include<iostream>
using namespace std;
int main()
{
  long long int k,x,y,n,i;
  cin>>k>>x>>y>>n;
  if(n>k)
  {
  	i=k*x+(n-k)*y;
  	cout<<i<<endl; 
  } 
  if(n<=k)
  {
  	i=n*x;
  	cout<<i<<endl;
  }
}
