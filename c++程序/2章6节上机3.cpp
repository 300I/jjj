//2��6���ϻ�3
#include<iostream>
using namespace std;
int main()
{
	int n;
    cout<<"������һ����λ����"<<endl; 
	cin>>n;
	int b=n/100;
	int s=(n/10)%10;
	int g=n%10;
	int m=100*g+s*10+b;

	
	cout<<"m="<<m<<endl;
	return 0;
} 
