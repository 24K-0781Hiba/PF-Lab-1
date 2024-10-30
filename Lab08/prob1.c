#include<stdio.h>
int main(){
	int n;
	int i, j;
	printf("enter your range, starting from 1: ");
	scanf("%d", &n);
	for (i=2; i<=n; i++){
		for (j=2; j*j<=i; j++){
			if (i%j==0){
		        break;
			}
		}
		if (i%j!=0||i==2){
			printf(" %d", i);
		}
	}
	return 0;
}
