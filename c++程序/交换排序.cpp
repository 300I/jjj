#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int cnt;
int arr[1005];
void Merge(int* arr,int* tmp,int left,int right,int rightEnd) {
	int leftEnd = right - 1;
	int start = left;
	while (left <= leftEnd && right <= rightEnd) {
		if (arr[left] > arr[right]) {
			tmp[start++] = arr[right++];
			cnt += (leftEnd - left+1);
		} else {
			tmp[start++] = arr[left++];
		}
	}
	while (left <= leftEnd) {
		tmp[start++] = arr[left++];
	}
	while (right <= rightEnd) {
		tmp[start++] = arr[right++];
	}
}
void MergeSort(int* arr,int* tmp,int n,int length) { //length当前有序子列的长度
	int i;
	for (i = 0; i <= n - 2 * length; i += 2 * length) {
		Merge(arr,tmp,i,i+length,i+2*length-1);
	}
	if (i + length < n) {
		Merge(arr,tmp,i,i+length,n-1);
	} else {
		for (int j = i; j < n; j++) {
			tmp[j] = arr[j];
		}
	}
}
void Merge_Sort(int* arr,int n) {
	int lenght = 1;
	int* tmp = (int *)malloc(sizeof(int)*n);
	while (lenght < n) {
		MergeSort(arr,tmp,n,lenght);
		lenght *= 2;
		MergeSort(tmp,arr,n,lenght);
		lenght *= 2;
	}
	free(tmp);
}
int main() {
	int n;
	while(scanf("%d",&n)!=EOF) {
		memset(arr,0,sizeof(arr));
		for(int i=0; i<n; i++) {
			scanf("%d",&arr[i]);
		}
		cnt=0;
		Merge_Sort(arr,n);
		printf("%d\n",cnt);
	}
	return 0;
}
