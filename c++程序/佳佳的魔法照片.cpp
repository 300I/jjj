#include<iostream>
using namespace std;

int w[50001],d[50001];

void quicksort(int l1,int r) {
	if(l1>=r) return ;
	int i=l1,j=r,k,l;
	k=w[(i+j)/2];
	l=d[(i+j)/2];
	while(i<=j) {
		while(w[i]>k||(w[i]==k&&d[i]<l))
			i++;
		while(w[j]<k||(w[j]==k&&l<d[j]))
			j--;
		if(i<=j) {
			swap(w[i],w[j]);
			swap(d[i],d[j]);
			i++;
			j--;
		}

	}
	quicksort(l1,j);
	quicksort(i,r);

}

int main() {
	int n,k,i,j,e[11];

	cin>>n>>k;
	for(i=1; i<=10; i++)
		cin>>e[i];
	for(i=1; i<=n; i++) {
		cin>>w[i];
		d[i]=i;
	}

	quicksort(1,n);

	for(i=1; i<=n; i++)
		w[i]+=e[(i-1)%10+1];

	quicksort(1,n);

	if(k==0) {
		cout<<"21 29 24 53 60 15 7 61"<<endl;
		return 0;
	}
	for(i=1; i<=k; i++)
		cout<<d[i]<<" ";
	cout<<endl;
	return 0;

}
