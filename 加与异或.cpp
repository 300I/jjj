#include<iostream>
#define ll long long
using namespace std;
ll x,y,a,b;
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>a>>b;
	x=(a-b)>>1;
	y=a-x;
	cout<<x<<" "<<y;
}
