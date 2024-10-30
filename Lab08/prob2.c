#include<stdio.h>
int main()
{
	int n;
	int i;
	printf("Input range: ");
	scanf("%d", &n);
	for (i=n; i>0; i--){
		if (i%2==0){
			continue;
		}
		if (i%2!=0||i==1){
			printf(" %d", i);
		}
	}
	return 0;
}
