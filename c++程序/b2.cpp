//某城市出租车收费标准是k公里以内(含k公里)，按每公里x元收费，如果超过k公里，其超出部分按每公里y元收费。请编程序计算乘车的费用。现在需要打的行驶n公里，输出需要的费用。
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
