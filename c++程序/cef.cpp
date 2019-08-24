#include <cstdio>
int main() {
	int a;
	scanf("%d",&a);
	if(a==100){
		printf("A+");
	}
	if(a<=99&&a>=95){
		printf("A");
	}
	if(a<=94&&a>=90){
		printf("A-");
	}
	if(a<=89&&a>=85){
		printf("B");
	}
	if(a<=84&&a>=80){
		printf("B-");
	}
	if(a<=79&&a>=70){
		printf("C");
	}
	if(a<=69&&a>=60){
		printf("C-");
	}
	if(a<=60&&a>=0){
		printf("D");
	}
	return 0;
}

